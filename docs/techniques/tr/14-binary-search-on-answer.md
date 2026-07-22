# 14 - Cevap Üzerinde Binary Search

[Önceki](13-binary-search-on-sorted-data.md) | [İçindekiler](README.md) | [English](../en/14-binary-search-on-answer.md) | [Sonraki](15-sorting-and-buckets.md)

## Zihinsel Model

Bazen sıralı bir dizi yoktur ama olası cevaplar sıralıdır. Bir kapasite `C` ile iş
tamamlanabiliyorsa daha büyük kapasiteyle de tamamlanabiliyorsa uygunluk monoton olur:
küçük cevaplar başarısız, bir sınırdan sonrası başarılıdır.

Binary search bu ilk başarılı sınırı bulur. Asıl iş `feasible(candidate)` testini
doğru kurmak ve monotonluğu kanıtlamaktır.

## Arama Sınırları

Kargo kapasitesinde alt sınır en ağır paket, üst sınır bütün paketlerin toplamıdır.
Bu sınırlar tahmin değil, cevabın kesinlikle dışına çıkamayacağı kanıtlanmış değerlerdir.

```c
while (left < right) {
    int mid = left + (right - left) / 2;
    if (feasible(mid)) right = mid;
    else left = mid + 1;
}
return left;
```

`mid` başarılı olduğunda cevap olabileceği için korunur; `right = mid` yapılır.
Başarısız olduğunda `mid` kesin elenir.

## Feasibility Testi

Test çoğu kez O(n) simülasyondur. Aday kapasiteyle sırayı bozmadan kaç gün gerektiği
hesaplanır. Binary search dışta O(log range), test içte O(n) olduğundan toplam
O(n log range) olur.

## Ne Zaman Kullanılmaz?

Uygunluk `true, false, true` gibi dalgalanıyorsa tek sınır yoktur. Ayrıca cevap
uzayı çok küçükse doğrudan deneme daha sade olabilir.

## C Riskleri

Üst sınır toplamı overflow yapabilir. Feasibility fonksiyonunun aday state'i her
çağrıda sıfırdan kurması ve girdi sırası gibi problem kısıtlarını koruması gerekir.

## Bu Repoda Çalış

[1011 - Capacity to Ship Packages Within D Days](../../../problems/1011-capacity-to-ship-packages-within-d-days/README.md) ana örnektir. Sayısal sınır düşüncesi için [69 - Sqrt(x)](../../../problems/0069-sqrtx/README.md) ve eşik araması için [2300 - Successful Pairs](../../../problems/2300-successful-pairs-of-spells-and-potions/README.md) ile karşılaştır.

## Sistem Bağı

Minimum buffer, bant genişliği, periyot veya güç bütçesini simülasyonla sınamak,
tasarım parametresi aramasında aynı tekniği kullanır.

