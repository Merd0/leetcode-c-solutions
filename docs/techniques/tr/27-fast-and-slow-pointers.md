# 27 - Fast ve Slow Pointers

[Önceki](26-linked-list-rewiring.md) | [İçindekiler](README.md) | [English](../en/27-fast-and-slow-pointers.md) | [Sonraki](28-recursion-and-backtracking.md)

## Zihinsel Model

İki pointer aynı bağlantı yapısında farklı hızlarla ilerlediğinde aralarındaki göreli
mesafe bilgi üretir. Slow bir adım, fast iki adım giderse fast listenin sonuna
ulaştığında slow ortadadır; cycle varsa göreli hareket nedeniyle sonunda karşılaşırlar.

Bu teknik iki pointer'ın genel bir alt türüdür fakat hareket kanıtı sıralılığa değil
hız farkına dayanır.

## Orta Nokta Invariant'ı

```c
struct ListNode *slow = head;
struct ListNode *fast = head;

while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
}
```

Fast yaklaşık iki kat yol aldığı için bittiğinde slow yarı yolu tamamlar. Çift
uzunlukta hangi orta düğümün döndüğü başlangıç ve koşul seçimine bağlıdır.

## Cycle Kanıtı

Cycle yoksa fast `NULL`'a ulaşır. Cycle varsa iki pointer cycle içine girdikten sonra
aralarındaki mesafe her tur modulo cycle uzunluğu kadar bir azalır ve sıfıra gelir.
Bu nedenle ek visited set olmadan cycle tespit edilir.

## Diğer Kullanımlar

N'inci düğümü sondan bulmak için iki pointer arasında N adım fark kurulur. Palindrome
listede orta bulunur, ikinci yarı çevrilir ve iki yarı karşılaştırılır.

## C Riskleri

`fast->next->next` öncesinde hem `fast` hem `fast->next` kontrol edilmelidir. Listeyi
palindrome için değiştiriyorsan API bekliyorsa sonunda eski bağlantıları geri kur.

## Bu Repoda Çalış

[876 - Middle of the Linked List](../../../problems/0876-middle-of-the-linked-list/README.md), [141 - Linked List Cycle](../../../problems/0141-linked-list-cycle/README.md), [19 - Remove Nth Node From End](../../../problems/0019-remove-nth-node-from-end-of-list/README.md), [234 - Palindrome Linked List](../../../problems/0234-palindrome-linked-list/README.md) ve [287 - Find the Duplicate Number](../../../problems/0287-find-the-duplicate-number/README.md).

## Sistem Bağı

Bağlı buffer zincirinde cycle tespiti ve tek geçişte orta bölme, ek visited belleği
olmadan çalıştığı için kısıtlı RAM ortamlarında değerlidir.

