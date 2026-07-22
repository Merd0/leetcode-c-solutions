# 01 - Brute Force (Kaba Kuvvet) ve Enumeration (Numaralandırma)

[İçindekiler](README.md) | [English](../en/01-brute-force-and-enumeration.md) | [Sonraki](02-linear-scan-and-indexing.md)

> Terimler: **Brute Force (Kaba Kuvvet)**, **Enumeration (Numaralandırma)**.

## Zihinsel Model

Kaba kuvvet, "aklıma daha iyisi gelmedi" çözümü değildir. Arama uzayındaki bütün
geçerli adayları eksiksiz üreten ve her adayı doğru sınayan referans çözümdür.
Optimizasyondan önce problemin sınırlarını ve doğruluk koşulunu görünür yapar.

Önce şu iki soruyu ayır: Kaç aday var ve bir adayı sınamak ne kadar sürüyor? Üç
indeks seçiliyorsa aday sayısı çoğunlukla O(n^3), her seçimin içinde dizi yeniden
geziliyorsa toplam maliyet O(n^4) olabilir. Büyük maliyetin kaynağı bu çarpımdır.

## State ve Invariant

Döngü indeksleri o ana kadar kurulmuş kısmi adayı temsil eder. En iç döngüye
gelindiğinde aday tamdır. Invariant şudur: Döngünün geride bıraktığı bütün adaylar
bir kez sınanmıştır; hiçbir aday atlanmamış veya iki kez sayılmamıştır.

```c
int count = 0;
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (valid(a[i], a[j])) {
            count++;
        }
    }
}
```

`j = i + 1` yalnız performans tercihi değildir. Aynı çifti `(i, j)` ve `(j, i)`
olarak iki kez üretmemeyi sağlayan aday tanımıdır.

## Nasıl İyileştirilir?

1. Önce doğru referans çözümü ve küçük testleri kur.
2. İç döngünün tekrar hesapladığı bilgiyi işaretle.
3. Bu bilgiyi prefix sum, hash table, sliding window veya sıralama ile taşımanın
   mümkün olup olmadığını sor.
4. Optimize çözümü referans çözümle rastgele küçük girdilerde karşılaştır.

## Ne Zaman Uygun Değildir?

Girdi sınırı aday sayısını imkansız kılıyorsa son çözüm olarak bırakılmaz. Yine de
doğruluk modeli, test oracle'ı ve daha iyi tekniğin bulunması için değerlidir.

## Maliyet ve C Riskleri

Zaman, aday sayısı ile aday kontrol maliyetinin çarpımıdır. İndekslerin sınırını
`i + 1` veya `i + 2` ile kullanırken son geçerli konumu ayrıca kanıtla. Çarpım ve
toplamlar `int` sınırını aşabiliyorsa `long long` kullan.

## Bu Repoda Çalış

[1925 - Count Square Sum Triples](../../../problems/1925-count-square-sum-triples/README.md) ile doğrudan numaralandırmayı, ardından [1588 - Sum of All Odd Length Subarrays](../../../problems/1588-sum-of-all-odd-length-subarrays/README.md) ile tekrar hesaplanan aralık toplamlarını incele.

## Sistem Bağı

Küçük giriş uzaylı register kombinasyonları, protokol durumları ve test vektörleri
için exhaustive test üretimi aynı fikirdir. Burada amaç hızdan önce kapsamdır.
