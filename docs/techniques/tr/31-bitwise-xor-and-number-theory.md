# 31 - Bitwise (Bit Düzeyi), XOR (Özel Veya) ve Number Theory (Sayı Teorisi)

[Önceki](30-dynamic-programming-and-kadane.md) | [İçindekiler](README.md) | [English](../en/31-bitwise-xor-and-number-theory.md) | [Sonraki](32-strings-parsing-and-pattern-matching.md)

> Terimler: **Bitwise (Bit Düzeyi)**, **XOR (Özel Veya)**, **Number Theory (Sayı Teorisi)**.

## Zihinsel Model

Bitwise düşünce bir integer'ı tek sayı değil, bağımsız boolean kanallar dizisi olarak
görür. Mask belirli bitleri seçer, shift bit konumunu taşır, XOR fark/parity bilgisini
biriktirir. Önce bit pozisyonunun anlamını tanımla, sonra operatörü seç.

Temel kimlikler: `x ^ x = 0`, `x ^ 0 = x`, `x & (x - 1)` en düşük set biti siler,
`x & -x` iki'nin tümleyeninde en düşük set biti ayırır.

## Mask Sözleşmesi

```c
unsigned int mask = 1u << bit;
bool set = (value & mask) != 0;
value |= mask;     /* biti kur */
value &= ~mask;    /* biti temizle */
value ^= mask;     /* biti değiştir */
```

Unsigned tip kullanmak sağ shift ve yüksek bit işlemlerini daha öngörülebilir yapar.
`bit`, tip genişliğinden küçük olmalıdır.

## Bit Sayma

```c
int count = 0;
while (value != 0) {
    value &= value - 1;
    count++;
}
```

Her tur tam bir set bit sildiği için süre kelime genişliği yerine set bit sayısına bağlıdır.

## XOR Ne Zaman İşe Yarar?

Çift tekrarlar birbirini yok ediyorsa, iki state arasındaki farklı bitler aranıyorsa
veya prefix parity tutuluyorsa XOR doğaldır. Frekans sayısı veya taşımalı aritmetik
gerekiyorsa XOR tek başına yeterli değildir.

## Sayı Teorisi Bağı

GCD için Euclid, basamak işleme için `% 10` ve `/ 10`, power-of-two için tek set bit
kontrolü kullanılır. Matematiksel ön koşullar, özellikle negatif ve sıfır durumları,
koddan önce yazılmalıdır.

## C Riskleri

Signed shift, genişlik kadar shift, `~` sonrası işaret genişlemesi ve literal tipleri
kritiktir. `<stdint.h>` türleri donanım genişliği gereken kodda tercih edilir.

## Bu Repoda Çalış

[136 - Single Number](../../../problems/0136-single-number/README.md), [191 - Number of 1 Bits](../../../problems/0191-number-of-1-bits/README.md), [393 - UTF-8 Validation](../../../problems/0393-utf-8-validation/README.md), [1318 - Minimum Flips](../../../problems/1318-minimum-flips-to-make-a-or-b-equal-to-c/README.md) ve [2997 - Minimum Operations to Make Array XOR Equal to K](../../../problems/2997-minimum-number-of-operations-to-make-array-xor-equal-to-k/README.md).

## Sistem Bağı

Register alanları, status flag'leri, protokol bitleri ve piksel formatları doğrudan
mask/shift ile işlenir. Tip genişliği ve reserved bitlerin korunması API sözleşmesidir.
