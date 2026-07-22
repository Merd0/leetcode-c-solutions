# 07 - Yerinde Read/Write Sıkıştırma

[Önceki](06-two-pointers.md) | [İçindekiler](README.md) | [English](../en/07-in-place-read-write.md) | [Sonraki](08-fixed-sliding-window.md)

## Zihinsel Model

`read` henüz karar verilen girdiyi, `write` ise geçerli çıktının biteceği konumu
gösterir. Aynı buffer hem kaynak hem hedef olur. Silme işlemi fiziksel olarak aradaki
elemanları kaydırmak değildir; hangi prefix'in geçerli çıktı sayıldığını değiştirmektir.

Bu ayrım özellikle `write -= k` gibi geri almaları anlamayı kolaylaştırır. Eski
`count` hücreleri temizlenmese bile artık geçerli prefix'in dışında kaldıkları için
mantıksal state'e ait değildir; ileride yeniden yazılırlar.

## Invariant

Her iterasyon başında `s[0..write)` işlenen girdinin tamamen geçerli ve sıkıştırılmış
çıktısıdır. `read` ve sonrası henüz tüketilmemiş olabilir.

```c
int write = 0;
for (int read = 0; read < n; read++) {
    if (keep(a[read])) {
        a[write] = a[read];
        write++;
    }
}
```

Sonuç uzunluğu `write` olur. String için ayrıca `s[write] = '\0'` gerekir.

## Geri Alma Modeli

Stack gibi kullanılan write pointer, son üretilen grubu iptal edebilir. Geçerli
state yalnız `[0, write)` aralığıdır. Bu nedenle silinen bölgedeki yardımcı sayaçların
sıfırlanması şart değildir; erişim tekrar o konuma geldiğinde değer atanmalıdır.

## Ne Zaman Kullanılmaz?

Girdi korunmak zorundaysa, çıktı daha büyük olabiliyorsa veya aynı buffer üzerindeki
yazma henüz okunmamış veriyi ezebiliyorsa ayrı çıktı alanı gerekir.

## Maliyet ve C Riskleri

Zaman O(n), ek alan çoğu kez O(1)'dir; grup sayaçları gibi yardımcı dizi kullanılırsa
O(n) olabilir. `write` negatif olmamalı, string sonlandırılmalı ve API'nin girdiyi
değiştirmeye izin verdiği doğrulanmalıdır.

## Bu Repoda Çalış

[26 - Remove Duplicates from Sorted Array](../../../problems/0026-remove-duplicates-from-sorted-array/README.md), [27 - Remove Element](../../../problems/0027-remove-element/README.md), [443 - String Compression](../../../problems/0443-string-compression/README.md) ve [1209 - Remove All Adjacent Duplicates II](../../../problems/1209-remove-all-adjacent-duplicates-in-string-ii/README.md).

## Sistem Bağı

Paket içinden kaçış karakteri ayıklama, filtrelenmiş örnekleri aynı buffer'a yazma
ve log sıkıştırma, ek allocation istemeden aynı read/write modelini kullanabilir.

