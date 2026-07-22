# 23 - Heap ve Top-K

[Önceki](22-monotonic-queue.md) | [İçindekiler](README.md) | [English](../en/23-heap-and-top-k.md) | [Sonraki](24-streams-and-iterators.md)

## Zihinsel Model

Heap bütün elemanları sıralamaz. Yalnız kökteki en küçük veya en büyük öğeyi hızlı
erişilebilir tutan kısmi düzen kurar. En güçlü K adayı isterken K boyutlu min-heap,
seçilenlerin en zayıfını kökte tutar; daha güçlü yeni aday gelirse kökü değiştirir.

Bu sayede n elemanın tamamını sıralamak yerine yalnız K elemanın düzeni korunur.

## Invariant

İlk i eleman işlendiğinde heap, bu prefix'in en iyi en fazla K adayını içerir. Heap
dolu ve yeni aday kökten daha iyi değilse ilk K içine giremez.

```c
for (int i = 0; i < n; i++) {
    if (heap_size < k) push(a[i]);
    else if (a[i] > peek_min()) {
        replace_min(a[i]);
    }
}
```

## Heap Düzeni

Dizi tabanlı 0-index heap'te ebeveyn `(i - 1) / 2`, çocuklar `2*i + 1` ve `2*i + 2`
olur. Push yukarı taşır, pop köke son elemanı getirip aşağı taşır. Heap sıralı dizi
değildir; yalnız parent-child ilişkisi garantilidir.

## Alternatifler

Tam sıralama O(n log n), heap O(n log K), quickselect ortalama O(n) olabilir.
Tekrarlı online veri için heap güçlüdür; tek seferlik küçük veri için sort daha sadedir.

## C Riskleri

Comparator yönü min/max heap'i belirler. Kapasite, `size_t`/`int` dönüşümü, boş kök
okuma ve heap içindeki pointer'ların ömrü açıkça yönetilmelidir.

## Bu Repoda Çalış

[347 - Top K Frequent Elements](../../../problems/0347-top-k-frequent-elements/README.md) frekans tablosu, bucket, heap ve quickselect karşılaştırması için ana problemdir. [414 - Third Maximum Number](../../../problems/0414-third-maximum-number/README.md) küçük sabit K için heap gerekmeyen alternatifi gösterir.

## Sistem Bağı

En yüksek öncelikli olaylar, en büyük hata sinyalleri veya sınırlı telemetri listesi
online Top-K olarak tutulabilir; gerçek zamanlı sistemde heap kapasitesi sabitlenebilir.

