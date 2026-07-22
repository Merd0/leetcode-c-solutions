# 28 - Recursion (Özyineleme) ve Backtracking (Geri İzleme)

[Önceki](27-fast-and-slow-pointers.md) | [İçindekiler](README.md) | [English](../en/28-recursion-and-backtracking.md) | [Sonraki](29-tree-and-graph-traversal.md)

> Terimler: **Recursion (Özyineleme)**, **Backtracking (Geri İzleme)**.

## Zihinsel Model

Recursion bir fonksiyonun kendini çağırması değil, aynı sözleşmeye sahip daha küçük
alt problemi çözmesidir. Her recursive tasarımda taban durum, çağrının küçülme ölçüsü
ve dönüş değerinin anlamı açık olmalıdır.

Backtracking buna seçim ağacını ekler: bir seçim yap, alt olasılıkları araştır,
sonra seçimin state üzerindeki etkisini geri al. Geri alma yapılmazsa kardeş dallar
birbirinin state'ini kirletir.

## Sözleşme ve Invariant

```c
void search(int index) {
    if (index == n) {
        record_if_valid();
        return;
    }

    choose(index);
    search(index + 1);
    undo(index);
    search(index + 1);
}
```

`search(index)` çağrısının sözleşmesi, ilk `index` karar sabitken kalan kararları
eksiksiz araştırmaktır. Fonksiyon döndüğünde çağrı öncesi mutable state geri gelmelidir.

## Doğruluk Fikri

Taban durum tam bir adayı değerlendirir. Recursive dallar bir sonraki kararın bütün
geçerli seçeneklerini ayrık biçimde kapsarsa hiçbir aday atlanmaz ve iki kez üretilmez.

## Recursion mı Iteration mı?

Ağaç yapısı recursive düşünceye doğal uyar. Ancak derinlik büyük veya kontrolsüzse
call stack taşabilir. Açık stack ile iteratif çözüm bellek sınırını görünür yapar.

## C Riskleri

Taban duruma yaklaşmayan çağrı, local buffer adresini döndürme, ortak state'i geri
almama ve derin recursion gömülü sistemde ciddi risklerdir.

## Bu Repoda Çalış

[104 - Maximum Depth of Binary Tree](../../../problems/0104-maximum-depth-of-binary-tree/README.md), [226 - Invert Binary Tree](../../../problems/0226-invert-binary-tree/README.md) ve recursive pointer pratiği için [24 - Swap Nodes in Pairs](../../../problems/0024-swap-nodes-in-pairs/README.md).

## Sistem Bağı

Protokol grammar'ı veya hiyerarşik konfigürasyon recursive olabilir; sert gerçek
zamanlı kodda maksimum derinlik kanıtlanmıyorsa explicit stack daha güvenlidir.
