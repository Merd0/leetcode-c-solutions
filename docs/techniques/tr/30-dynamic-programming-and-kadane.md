# 30 - Dynamic Programming (Dinamik Programlama) ve Kadane

[Önceki](29-tree-and-graph-traversal.md) | [İçindekiler](README.md) | [English](../en/30-dynamic-programming-and-kadane.md) | [Sonraki](31-bitwise-xor-and-number-theory.md)

> Terim: **Dynamic Programming (Dinamik Programlama)**, **Kadane Algoritması**.

## Zihinsel Model

Dynamic programming, aynı alt problemler tekrar oluştuğunda sonuçlarını saklar.
Bir çözümü DP yapan şey tablo değil; geleceği belirlemeye yeten state tanımı, state
geçişi ve alt problemlerin tekrar kullanılmasıdır.

Önce `dp[i] ne demek?` sorusuna tek cümleyle cevap ver. Sonra bu state'in hangi
önceki state'lerden üretildiğini ve taban değerini belirle.

## Kadane State'i

Maximum subarray için `ending_here`, tam `i` indeksinde bitmek zorunda olan en iyi
toplamdır. Yeni eleman ya tek başına başlar ya önceki en iyi suffix'e eklenir.

```c
long long ending_here = a[0];
long long best = a[0];

for (int i = 1; i < n; i++) {
    long long extend = ending_here + a[i];
    ending_here = extend > a[i] ? extend : a[i];
    if (ending_here > best) best = ending_here;
}
```

`best` herhangi bir yerde biten global cevap, `ending_here` ise daha dar bir state'tir.
İkisini karıştırmak negatif dizilerde hata üretir.

## Memoization ve Tabulation

Memoization recursive ihtiyaç duyulan state'leri hesaplar; tabulation bağımlılık
sırasına göre iteratif doldurur. Tabulation call stack kullanmaz ve bellek erişimi
daha öngörülebilir olabilir. Yalnız önceki birkaç state gerekiyorsa tablo sıkıştırılır.

## Ne Zaman DP Değildir?

Alt problemler örtüşmüyorsa divide-and-conquer yeterlidir. State geçmişin tamamını
taşıyorsa henüz doğru özet bulunmamıştır. Greedy invariant kanıtlanabiliyorsa DP gereksizdir.

## C Riskleri

Başlangıcı 0 almak tüm değerler negatifken yanlış olabilir. Boyut çarpımı allocation
overflow'u, sentinel değerle gerçek değeri karıştırma ve indeks bağımlılık sırası test edilir.

## Bu Repoda Çalış

[53 - Maximum Subarray](../../../problems/0053-maximum-subarray/README.md), [152 - Maximum Product Subarray](../../../problems/0152-maximum-product-subarray/README.md) ve state geçişi düşüncesi için [845 - Longest Mountain](../../../problems/0845-longest-mountain-in-array/README.md).

## Sistem Bağı

Enerji/puan optimizasyonu ve sekans hizalama DP olabilir; gömülü hedefte RAM bütçesi
için rolling state ve sabit boyutlu buffer tercih edilir.
