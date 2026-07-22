# 09 - Değişken Boyutlu Kayan Pencere

[Önceki](08-fixed-sliding-window.md) | [İçindekiler](README.md) | [English](../en/09-variable-sliding-window.md) | [Sonraki](10-prefix-sums.md)

## Zihinsel Model

Pencerenin boyutu sabit değilse iki sınır geçerlilik koşuluna göre hareket eder.
`right` yeni veri ekler; koşul bozulduğunda `left`, pencere yeniden geçerli olana
kadar ilerler. Amaç her başlangıç için bütün bitişleri denemek yerine sınırları
monoton taşımaktır.

Tekniğin çalışması için pencere büyüdüğünde veya küçüldüğünde koşulun öngörülebilir
bir yönde değişmesi gerekir. Pozitif sayıların toplamı buna örnektir.

## Invariant

İç `while` bittikten sonra `[left, right]` geçerlidir ve çoğu problemde aynı `right`
için daha soldaki pencereler geçersizdir.

```c
int left = 0;
long long state = 0;

for (int right = 0; right < n; right++) {
    add(&state, a[right]);
    while (!valid(state)) {
        remove_value(&state, a[left]);
        left++;
    }
    use_window(left, right);
}
```

Pencere uzunluğu iki uç dahil olduğu için `right - left + 1` olur.

## Neden O(n)?

İçeride `while` bulunması otomatik olarak O(n^2) yapmaz. `right` yalnız ileri gider,
`left` de bütün algoritma boyunca en fazla n kez ilerler. Toplam sınır hareketi 2n'dir.

## Kritik Varsayım

Negatif sayılar varken toplam pencereyi büyütünce azalabilir. Bu durumda "fazlaysa
soldan çıkar" kuralı geçerli bir monotonluk sunmaz. Prefix sum ve hash table gibi
başka bir teknik gerekebilir.

## Maliyet ve C Riskleri

Zaman O(n), state'e göre alan O(1) veya karakter frekansı için O(domain)'dir.
Çıkarma işlemi eklemenin gerçek tersini yapmalı; frekans sıfıra düşünce farklı
karakter sayısı gibi türetilmiş state de güncellenmelidir.

## Bu Repoda Çalış

[209 - Minimum Size Subarray Sum](../../../problems/0209-minimum-size-subarray-sum/README.md), [713 - Subarray Product Less Than K](../../../problems/0713-subarray-product-less-than-k/README.md), [3 - Longest Substring Without Repeating Characters](../../../problems/0003-longest-substring-without-repeating-characters/README.md) ve [76 - Minimum Window Substring](../../../problems/0076-minimum-window-substring/README.md).

## Sistem Bağı

Zaman damgalı olaylarda son T milisaniye, değişken uzunluklu geçerli paket bölgesi
ve enerji bütçesi dolana kadar örnek toplama bu modele yakındır.

