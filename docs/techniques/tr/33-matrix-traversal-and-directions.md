# 33 - Matrix Traversal (Matris Gezinmesi) ve Direction Arrays (Yön Dizileri)

[Önceki](32-strings-parsing-and-pattern-matching.md) | [İçindekiler](README.md) | [English](../en/33-matrix-traversal-and-directions.md) | [Sonraki](34-matrix-neighborhoods-and-in-place-state.md)

> Terimler: **Matrix Traversal (Matris Gezinmesi)**, **Direction Arrays (Yön Dizileri)**.

## Zihinsel Model

Matrix probleminde ilk sözleşme koordinattır: `matrix[row][col]`. `row` dikey ekseni,
`col` yatay ekseni temsil eder. İsimleri `i, j` yerine bir süre açık yazmak, satır ve
sütun karışıklığını ciddi biçimde azaltır.

Temel traversal dış döngüde satır, içte sütun gezer. C'de satır verileri ardışık
olduğundan bu sıra cache davranışı açısından da çoğu zaman uygundur.

## Boyut Sözleşmesi

LeetCode `int **matrix` için satır pointer'ları verir. `matrixSize` satır sayısı,
`matrixColSize[row]` o satırın sütun sayısıdır. Her matrisin dikdörtgen olduğunu
varsaymadan önce problem sözleşmesini kontrol et.

```c
for (int row = 0; row < rows; row++) {
    for (int col = 0; col < cols; col++) {
        use(matrix[row][col]);
    }
}
```

## Yön Dizileri

Dört komşu hareketi kod tekrarına çevirmek yerine veri olarak tut:

```c
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

for (int d = 0; d < 4; d++) {
    int nr = row + dr[d];
    int nc = col + dc[d];
    if (0 <= nr && nr < rows && 0 <= nc && nc < cols) use(nr, nc);
}
```

`dr[d], dc[d]` tek bir yön çiftidir. Sekiz komşuluk için dört diagonal çift eklenir.

## Özel Traversal'lar

Spiral, diagonal ve transpose işlemlerinde sınırlar veya koordinat dönüşümü state'tir.
Her tur sonunda hangi satır/sütunun tamamlandığını invariant olarak belirt.

## C Riskleri

`matrix[col][row]` yanlışlığı, `col <= cols`, boş matrixte `matrixColSize[0]` okuma
ve jagged satırlarda tek `cols` kullanma kritik hatalardır.

## Bu Repoda Çalış

[54 - Spiral Matrix](../../../problems/0054-spiral-matrix/README.md), [48 - Rotate Image](../../../problems/0048-rotate-image/README.md), [74 - Search a 2D Matrix](../../../problems/0074-search-a-2d-matrix/README.md), [867 - Transpose Matrix](../../../problems/0867-transpose-matrix/README.md) ve [1572 - Matrix Diagonal Sum](../../../problems/1572-matrix-diagonal-sum/README.md).

## MEOS Bağı

Görüntü buffer'ı piksel koordinatlarıyla gezilir; yön dizileri connected region,
komşu piksel, kenar takibi ve robotik hareket modellerinin ortak dilidir.
