# 18 - Intervals (Aralıklar)

[Önceki](17-greedy.md) | [İçindekiler](README.md) | [English](../en/18-intervals.md) | [Sonraki](19-stack.md)

> Terim: **Intervals (Aralıklar)**.

## Zihinsel Model

Interval bir başlangıç ve bitişten fazlasıdır; uçların dahil olup olmadığı sözleşmenin
parçasıdır. `[a, b]` kapalı aralıkta `b == c` temas sayılabilir, `[a, b)` zaman
aralığında `b` anında ilk iş bitmiş kabul edilir.

Merge problemlerinde aralıkları başlangıca göre sıralamak, gelecekteki bütün
örtüşmeleri tek aktif aralıkla karşılaştırılabilir hale getirir.

## Invariant

İşlenen prefix tamamen birleştirilmiştir; `currentStart, currentEnd` henüz sonuca
yazılmamış en son birleşik aralığı temsil eder.

```c
if (next_start <= current_end) {
    if (next_end > current_end) current_end = next_end;
} else {
    emit(current_start, current_end);
    current_start = next_start;
    current_end = next_end;
}
```

Döngü bittikten sonra aktif aralık ayrıca yazılmalıdır. Çünkü yalnız yeni ayrık
aralık görüldüğünde emit edilmiştir.

## Event Sweep Bağı

Maksimum eşzamanlı etkinlik veya kapasite kontrolünde interval'ı bütünüyle taşımak
yerine başlangıçta `+x`, bitişte `-x` olayı üretmek daha doğrudur. Teknik seçimi
istenen çıktıya bağlıdır: birleşik aralıklar mı, aktif toplam mı?

## Ne Zaman Kullanılmaz?

Aralıklar sürekli güncellenip sorgulanıyorsa tek sıralama yeterli olmaz. Interval
tree gibi dinamik yapılar gerekebilir.

## Maliyet ve C Riskleri

Sıralama O(n log n), tarama O(n)'dir. `int**` sonuçta pointer dizisi için
`sizeof(int*)`, her interval satırı için `2 * sizeof(int)` ayrılmalıdır. Çıktı
uzunluğu ve column size dizisi API sözleşmesine göre güncellenir.

## Bu Repoda Çalış

[56 - Merge Intervals](../../../problems/0056-merge-intervals/README.md), [495 - Teemo Attacking](../../../problems/0495-teemo-attacking/README.md) ve [1094 - Car Pooling](../../../problems/1094-car-pooling/README.md) interval bilgisinin üç farklı temsilini gösterir.

## Sistem Bağı

Sensör aktiflik pencereleri, görev zamanları, veri geçerlilik aralıkları ve kaynak
rezervasyonları interval semantiğine dayanır. Uç sözleşmesi sistem hatalarını önler.
