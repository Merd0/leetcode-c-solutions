# 34 - Matrix Neighborhoods (Matris Komşulukları) ve In-Place State (Yerinde Durum)

[Önceki](33-matrix-traversal-and-directions.md) | [İçindekiler](README.md) | [English](../en/34-matrix-neighborhoods-and-in-place-state.md) | [Sonraki](35-2d-prefix-sum-and-image-regions.md)

> Terimler: **Matrix Neighborhoods (Matris Komşulukları)**, **In-Place State (Yerinde Durum)**.

## Zihinsel Model

Bir pikselin çıktısı çevresindeki hücrelere bağlıysa pencere merkezi `(row, col)`
etrafında ofsetlerle kurulur. 3x3 komşuluk için satır `row - 1..row + 1`, sütun
`col - 1..col + 1` aralığındadır. Sınırdaki eksik komşular sıfır kabul edilmez;
problem ne diyorsa atlanır, pad edilir veya farklı işlenir.

Genel tek yarıçaplı pencere `[-radius, +radius]` ofsetlerini kullanır. Çift boyutlu
4x4 pencerenin tek merkezi olmadığı için anchor sözleşmesi ayrıca tanımlanmalıdır.

## Invariant

Her çıktı hücresi yalnız giriş matrix'inin tanımlı komşularından hesaplanır. Sum ve
count her merkez için sıfırlanır.

```c
for (int nr = row - 1; nr <= row + 1; nr++) {
    for (int nc = col - 1; nc <= col + 1; nc++) {
        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols) {
            sum += image[nr][nc];
            count++;
        }
    }
}
output[row][col] = sum / count;
```

## Çıktı Boyutu

Padding yoksa 3x3 valid window yalnız `rows - 2` by `cols - 2` merkezde tamamen
sığar. Largest Local bu yüzden daha küçük çıktı üretir. Image Smoother ise sınırdaki
mevcut komşuları saydığı için girişle aynı boyutu korur.

## In-Place State Sorunu

Yeni pikseli girişe hemen yazmak sonraki komşunun eski değeri yerine yeni değeri
okumasına yol açabilir. Ayrı çıktı matrix'i en açık çözümdür. Yerinde gerekiyorsa
eski ve yeni değer aynı hücrede bit paketleme gibi kanıtlı bir encoding ile tutulur.

## Allocation ve Ownership

Önce satır pointer dizisi `rows * sizeof(int*)`, sonra her satır
`cols * sizeof(int)` ayrılır. Kısmi allocation başarısızsa önceki satırlar bırakılır.

## Bu Repoda Çalış

[661 - Image Smoother](../../../problems/0661-image-smoother/README.md), [2373 - Largest Local Values](../../../problems/2373-largest-local-values-in-a-matrix/README.md), [289 - Game of Life](../../../problems/0289-game-of-life/README.md), [73 - Set Matrix Zeroes](../../../problems/0073-set-matrix-zeroes/README.md) ve [832 - Flipping an Image](../../../problems/0832-flipping-an-image/README.md).

## MEOS Bağı

Mean filter, local maximum, morphology ve convolution aynı neighborhood modelinden
doğar. Sınır politikası ve eski/yeni frame ayrımı görüntü sonucunu doğrudan değiştirir.
