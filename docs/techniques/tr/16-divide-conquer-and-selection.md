# 16 - Divide-and-Conquer (Böl ve Yönet) ve Selection (Seçim)

[Önceki](15-sorting-and-buckets.md) | [İçindekiler](README.md) | [English](../en/16-divide-conquer-and-selection.md) | [Sonraki](17-greedy.md)

> Terimler: **Divide-and-Conquer (Böl ve Yönet)**, **Selection (Seçim)**.

## Zihinsel Model

Divide-and-conquer problemi daha küçük bağımsız parçalara böler, parçaları çözer ve
sonuçları birleştirir. Selection problemleri ise tüm sıralamayı değil yalnız k'ncı
konumu ister; gereksiz düzen bilgisini hesaplamamaya çalışır.

Üç soruyu cevapla: Alt problemlerin sınırı nedir, taban durum nedir ve iki alt
sonuç nasıl birleşir? Birleştirme maliyeti toplam karmaşıklığı belirler.

## Quickselect Fikri

Pivot etrafında partition sonrası pivotun son konumu bilinir. Aranan rank soldaysa
sağ tarafı, sağdaysa sol tarafı tamamen atarsın.

```c
while (left <= right) {
    int pivot_index = partition(a, left, right);
    if (pivot_index == target) return a[pivot_index];
    if (pivot_index < target) left = pivot_index + 1;
    else right = pivot_index - 1;
}
```

Ortalama O(n) olsa da kötü pivotlarla O(n^2) mümkündür. Random pivot bu riski azaltır,
tamamen ortadan kaldırmaz.

## Divide-and-Conquer Invariant'ı

Her recursive çağrı kendi aralığı için aynı sözleşmeyi yerine getirir. Birleştirme
aşaması yalnız bu sözleşmelere güvenmelidir. Shared buffer veya global state varsa
alt problemlerin bağımsızlığı dikkatle korunur.

## Ne Zaman Kullanılmaz?

Alt problemler yoğun biçimde örtüşüyorsa aynı işler tekrar hesaplanır; dynamic
programming veya memoization daha uygundur. Küçük veri için tam sıralama daha basit olabilir.

## C Riskleri

Partition sınırları, recursion depth, pivot overflow'u ve duplicate değerlerde
ilerlemeyen pointer'lar yaygın sorunlardır. Worst-case stack kullanımı değerlendirilmelidir.

## Bu Repoda Çalış

[347 - Top K Frequent Elements](../../../problems/0347-top-k-frequent-elements/README.md) farklı Top-K yollarını karşılaştırmak için iyi merkezdir. Temel partition düşüncesini [75 - Sort Colors](../../../problems/0075-sort-colors/README.md) üzerinde de gözlemle.

## Sistem Bağı

Büyük ölçüm bloklarında median veya percentile seçmek, tüm bloğu sıralamadan yalnız
gereken rank'ı bulma ihtiyacına dönüşebilir.
