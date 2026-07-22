# 10 - Prefix Sum (Önek Toplam)

[Önceki](09-variable-sliding-window.md) | [İçindekiler](README.md) | [English](../en/10-prefix-sums.md) | [Sonraki](11-prefix-state-xor-and-product.md)

> Terim: **Prefix Sum (Önek Toplam)**.

## Zihinsel Model

Prefix sum, "ilk i elemanın toplamı" bilgisini önceden saklar. Böylece aynı dizi
üzerindeki çok sayıda aralık toplamı, aralığı yeniden gezmeden iki prefix değeri
arasındaki farka dönüşür.

En temiz tanım `prefix[0] = 0` ve `prefix[i + 1] = prefix[i] + a[i]` biçimidir.
Ek sıfır hücresi, 0'dan başlayan aralıklar için özel koşulu ortadan kaldırır.

## Invariant ve Sorgu

`prefix[t]`, `a[0..t)` yarı açık aralığının toplamıdır.

```c
long long *prefix = calloc((size_t)n + 1, sizeof(*prefix));
for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + a[i];
}

/* [left, right] dahil */
long long sum = prefix[right + 1] - prefix[left];
```

İlk toplam hem solun öncesini hem istenen bölgeyi içerir; ikinci toplam yalnız
solun öncesini içerir. Çıkarma geriye tam istenen aralığı bırakır.

## Prefix Sum ile Hash Birleşimi

Alt dizi toplamı `k` ise `prefix[j] - prefix[i] = k`, yani geçmişte
`prefix[j] - k` değeri aranır. Bu dönüşüm, negatif sayıların sliding window'u
bozduğu problemlerde hash table ile O(n) çözüm kurabilir.

## Ne Zaman Kullanılmaz?

Tek bir sabit boyutlu pencere taraması için sliding window daha az bellek ister.
Dizi sık güncelleniyorsa statik prefix değerlerinin sonrası geçersiz olur; Fenwick
tree veya segment tree gibi yapılar gerekir.

## Maliyet ve C Riskleri

Kurulum O(n), her sorgu O(1), alan O(n)'dir. `right + 1` tanımını karıştırmak,
`prefix` için yetersiz hücre ayırmak ve toplam overflow'u yaygın hatalardır.

## Bu Repoda Çalış

[1480 - Running Sum](../../../problems/1480-running-sum-of-1d-array/README.md), [303 - Range Sum Query](../../../problems/0303-range-sum-query-immutable/README.md), [724 - Find Pivot Index](../../../problems/0724-find-pivot-index/README.md) ve [560 - Subarray Sum Equals K](../../../problems/0560-subarray-sum-equals-k/README.md).

## Sistem Bağı

Örnek bloklarının enerji toplamı, zaman aralığı sayaçları ve offline telemetri
sorguları aynı birikimli özet fikrini kullanır.
