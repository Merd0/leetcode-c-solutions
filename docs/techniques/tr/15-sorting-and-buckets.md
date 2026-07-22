# 15 - Sıralama ve Bucket Yaklaşımı

[Önceki](14-binary-search-on-answer.md) | [İçindekiler](README.md) | [English](../en/15-sorting-and-buckets.md) | [Sonraki](16-divide-conquer-and-selection.md)

## Zihinsel Model

Sıralama çoğu zaman cevabın kendisi değil, dağınık ilişkileri komşuluk ilişkisine
dönüştüren ön işlemdir. Eşit değerler yan yana gelir, en küçük/büyük uçlarda görünür,
interval ve iki işaretçi kararları monotonlaşır.

Sıralamanın bedeli O(n log n) ve çoğu API'de girdinin değişmesidir. Bu bedelin
sonraki işlemi ne kadar sadeleştirdiğini açıkça söyleyebilmelisin.

## Comparator Sözleşmesi

```c
int compare_ints(const void *lhs, const void *rhs) {
    int a = *(const int *)lhs;
    int b = *(const int *)rhs;
    return (a > b) - (a < b);
}
```

`return a - b` overflow yapabilir. Comparator negatif, sıfır veya pozitif sonuçla
tam bir sıralama ilişkisi üretmelidir.

## Bucket Ne Zaman Daha İyi?

Değer domain'i küçükse karşılaştırmalı sıralama yerine frekans bucket'ları kurulur.
Sort Colors problemindeki üç değer veya sınırlı puan aralığı buna örnektir. Maliyet
O(n + domain) olur ve davranış daha deterministiktir.

## Invariant

Sıralama sonrası çözümün invariant'ı probleme göre kurulur: işlenen prefix doğru
gruplara ayrılmıştır, aktif interval en sağa uzanan aralıktır veya iki pointer dışındaki
çiftler elenmiştir. "Sıraladım, çalıştı" doğruluk açıklaması değildir.

## Ne Zaman Kullanılmaz?

Orijinal sıra anlam taşıyorsa indeksleri birlikte sakla veya sıralamadan kaçın.
Yalnız maksimum aranıyorsa O(n) tarama, küçük K aranıyorsa heap/quickselect daha ucuz olabilir.

## Bu Repoda Çalış

[75 - Sort Colors](../../../problems/0075-sort-colors/README.md), [49 - Group Anagrams](../../../problems/0049-group-anagrams/README.md), [1356 - Sort Integers by the Number of 1 Bits](../../../problems/1356-sort-integers-by-the-number-of-1-bits/README.md) ve [561 - Array Partition](../../../problems/0561-array-partition/README.md).

## Sistem Bağı

Ölçümleri zaman damgasına göre düzenleme veya hata kayıtlarını koduna göre gruplama
yararlı olabilir; gerçek zamanlı hot path'te ise worst-case ve allocation davranışı incelenmelidir.

