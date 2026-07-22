# 11 - Prefix State (Önek Durumu), XOR (Özel Veya) ve Product (Çarpım)

[Önceki](10-prefix-sums.md) | [İçindekiler](README.md) | [English](../en/11-prefix-state-xor-and-product.md) | [Sonraki](12-difference-arrays-and-event-sweeps.md)

> Terimler: **Prefix State (Önek Durumu)**, **XOR (Özel Veya)**, **Product (Çarpım)**.

## Zihinsel Model

Prefix fikri yalnız toplama ait değildir. Bir işlemin birikimli özeti tutulabiliyor
ve iki prefix'ten aralık bilgisi geri çıkarılabiliyorsa aynı model XOR, parity,
frekans durumu veya bazı product problemlerinde de çalışır.

Önce state'in anlamını cümleyle tanımla. "`prefix[i]` ilk i elemanın XOR'u" net bir
tanımdır; "şimdiye kadarki değer" yeterince kesin değildir.

## XOR Prefix

XOR'da bir değer kendisiyle uygulanınca silinir: `x ^ x = 0`. Bu nedenle
`prefix[right + 1] ^ prefix[left]`, `[left, right]` aralığının XOR'unu verir.

```c
prefix[0] = 0;
for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] ^ a[i];
}
int range_xor = prefix[right + 1] ^ prefix[left];
```

## Prefix/Suffix State

Bazen her indeks için sol tarafın ve sağ tarafın ayrı özeti gerekir. Product of
Array Except Self çözümünde önce soldaki çarpım çıktıya yazılır, sağdan gelirken
taşınan suffix product ile birleştirilir. Böylece bölme ve O(n) ek prefix dizisi
gerekmez.

Prefix product her durumda çıkarılabilir değildir. Sıfır varsa bölme tanımsızdır;
çarpımlar da hızlı overflow yapar. İşlemin tersinin gerçekten var olup olmadığını
kanıtlamadan sum formülünü kopyalama.

## State Sıkıştırma

Bir stringde her seslinin tek/çift görülmesini beş bitlik maskede tutmak, büyük bir
geçmişi küçük prefix state'e dönüştürür. Aynı state iki konumda görülürse aradaki
bölge bu parity'leri değiştirmemiştir.

## Maliyet ve C Riskleri

Çoğu prefix state çözümü O(n) zaman kullanır. State sayısı sabitse dizi, genişse
hash table seçilir. Signed bit işlemleri ve product overflow'u ayrıca incelenmelidir.

## Bu Repoda Çalış

[1310 - XOR Queries](../../../problems/1310-xor-queries-of-a-subarray/README.md), [238 - Product of Array Except Self](../../../problems/0238-product-of-array-except-self/README.md), [1371 - Vowels in Even Counts](../../../problems/1371-find-the-longest-substring-containing-vowels-in-even-counts/README.md) ve [1352 - Product of the Last K Numbers](../../../problems/1352-product-of-the-last-k-numbers/README.md).

## Sistem Bağı

Çerçeve checksum özeti, hata parity'si ve iki ölçüm noktası arasındaki değişimi
birikimli state'ten çıkarma, aynı cebirsel düşünceyi kullanır.
