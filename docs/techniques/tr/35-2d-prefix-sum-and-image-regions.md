# 35 - 2D Prefix Sum ve Görüntü Bölgeleri

[Önceki](34-matrix-neighborhoods-and-in-place-state.md) | [İçindekiler](README.md) | [English](../en/35-2d-prefix-sum-and-image-regions.md)

## Zihinsel Model

2D prefix sum, integral image olarak da bilinir. Her prefix hücresi sol üst köşeden
o noktaya kadar olan dikdörtgenin toplamını saklar. Sonra herhangi bir rectangular
ROI toplamı, dört büyük bölgenin eklenip çıkarılmasıyla O(1) hesaplanır.

Ek sıfır satır ve sütun kullanmak sınır formüllerini sadeleştirir. `prefix[r + 1][c + 1]`,
girişte `[0..r][0..c]` bölgesini içerir.

## Kurulum Invariant'ı

```c
prefix[r + 1][c + 1] = image[r][c]
    + prefix[r][c + 1]
    + prefix[r + 1][c]
    - prefix[r][c];
```

Üst bölge ile sol bölge eklenir. Sol üst kesişim iki kez eklendiği için bir kez
çıkarılır. Sonra mevcut piksel eklenir.

## ROI Formülü

`(r1, c1)` ile `(r2, c2)` dahil dikdörtgen toplamı:

```c
sum = prefix[r2 + 1][c2 + 1]
    - prefix[r1][c2 + 1]
    - prefix[r2 + 1][c1]
    + prefix[r1][c1];
```

Bütün büyük prefix'ten ROI'nin üstü ve solu çıkarılır. Sol üst dış bölge iki kez
çıktığı için yeniden eklenir.

## Neden Güçlü?

Kurulum O(rows * cols), her bölge sorgusu O(1)'dir. Çok sayıda farklı ROI veya box
filter sorgusu varsa her bölgeyi tekrar gezmekten büyük kazanç sağlar.

## Ne Zaman Kullanılmaz?

Tek bir küçük komşuluk için doğrudan döngü daha sadedir. Görüntü sık güncelleniyorsa
prefix tablosunun etkilenen büyük bölümü geçersiz olur; dinamik 2D yapılar gerekebilir.

## C Riskleri

Toplamlar piksel tipinden çok daha geniş olabilir; `long long` kullan. İki boyutlu
allocation'ın her satırını ve en sonunda pointer dizisini serbest bırak. Dahil/haric
koordinat sözleşmesini API'de açık yaz.

## Bu Repoda Çalış

[304 - Range Sum Query 2D](../../../problems/0304-range-sum-query-2d-immutable/README.md) temel uygulamadır. Matrix aggregate düşüncesini [2125 - Number of Laser Beams](../../../problems/2125-number-of-laser-beams-in-a-bank/README.md) ve [1572 - Matrix Diagonal Sum](../../../problems/1572-matrix-diagonal-sum/README.md) ile karşılaştır.

## MEOS Bağı

ROI parlaklığı, hızlı box filter, local contrast ve hedef bölge enerji hesabı integral
image'in doğrudan elektro-optik kullanım alanlarıdır.

