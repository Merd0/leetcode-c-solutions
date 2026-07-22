# 02 - Linear Scan (Doğrusal Tarama) ve Indexing (İndeksleme)

[Önceki](01-brute-force-and-enumeration.md) | [İçindekiler](README.md) | [English](../en/02-linear-scan-and-indexing.md) | [Sonraki](03-simulation-and-state-machines.md)

> Terimler: **Linear Scan (Doğrusal Tarama)**, **Indexing (İndeksleme)**.

## Zihinsel Model

Doğrusal taramada her eleman bir kez okunur ve geçmişin tamamı yerine karar için
yeterli küçük bir özet taşınır. Bu özet bir minimum, maksimum, sayaç, son görülen
değer veya birkaç state değişkeni olabilir.

Temel soru şudur: `i` konumuna geldiğimde geçmişten gerçekten neyi bilmem gerekiyor?
Cevap sabit boyutluysa O(n) zaman ve çoğu kez O(1) ek alan mümkündür.

## Invariant Kurma

Örneğin en iyi alım-satım farkında `min_seen`, `i` indeksinden önce ve `i` dahil
görülen en küçük değerdir; `best` ise şimdiye kadar tamamlanabilen en iyi sonuçtur.

```c
int min_seen = a[0];
int best = 0;

for (int i = 1; i < n; i++) {
    int candidate = a[i] - min_seen;
    if (candidate > best) best = candidate;
    if (a[i] < min_seen) min_seen = a[i];
}
```

Güncelleme sırası önemlidir. Önce mevcut elemanı geçmiş özetiyle değerlendirir,
sonra onu gelecek iterasyonların geçmişine katarsın.

## İndeks Sözleşmesi

Bir döngüde `a[i + 1]` okunuyorsa koşul `i + 1 < n` olmalıdır. "Son elemana kadar
gez" cümlesi belirsizdir; "döngü başında `i` geçerli ve okunacak komşular da dizi
içinde" cümlesi gerçek sözleşmedir.

## Ne Zaman Yetmez?

Karar geçmişteki tek bir özetle verilemiyorsa başka yapı gerekir. Örneğin belirli
bir değerin daha önce görülüp görülmediği için hash table, hareketli aralık için
sliding window, sıradaki daha büyük değer için monotonic stack daha doğrudur.

## Maliyet ve C Riskleri

Zaman O(n), ek alan taşınan state kadar O(1)'dir. Boş dizi olasılığını ilk elemana
erişmeden önce kontrol et. Sayaç ve toplamların tipini maksimum girdiye göre seç.

## Bu Repoda Çalış

[121 - Best Time to Buy and Sell Stock](../../../problems/0121-best-time-to-buy-and-sell-stock/README.md), [495 - Teemo Attacking](../../../problems/0495-teemo-attacking/README.md) ve [845 - Longest Mountain in Array](../../../problems/0845-longest-mountain-in-array/README.md) aynı tarama fikrinin farklı state tasarımlarını gösterir.

## Sistem Bağı

ADC örneklerinden tepe, minimum, eşik aşımı veya ardışık değişim bulmak çoğunlukla
tek geçişli taramadır. Düşük bellekli sistemlerde geçmişin küçük özetini taşımak
özellikle değerlidir.
