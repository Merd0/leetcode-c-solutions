# 26 - Linked List Bağlantı Değiştirme

[Önceki](25-stateful-apis-design-and-ownership.md) | [İçindekiler](README.md) | [English](../en/26-linked-list-rewiring.md) | [Sonraki](27-fast-and-slow-pointers.md)

## Zihinsel Model

Linked list probleminde düğümlerin bellekteki yerini değil `next` bağlantılarını
değiştirirsin. En önemli alışkanlık, bir bağlantıyı ezmeden önce devam adresini
saklamaktır. Kaybedilen `next` pointer geri üretilemez.

Her pointer'a rol adı ver: `prev` tamamlanmış bölümün sonu, `curr` işlenen düğüm,
`next` henüz dokunulmamış bölümün başlangıcı.

## Reverse Invariant'ı

```c
struct ListNode *prev = NULL;
struct ListNode *curr = head;

while (curr != NULL) {
    struct ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}
return prev;
```

Her iterasyon başında `prev` doğru ters çevrilmiş prefix'in başı, `curr` işlenmemiş
suffix'in başıdır. Geçiş bu iki parçayı bir düğüm kaydırır.

## Dummy Head

Baş düğüm silme veya sonuç listesine ekleme özel durumunu kaldırmak için sahte bir
düğüm kullanılır. Dummy gerçek sonuç değildir; dönüşte `dummy.next` verilir. Böylece
"ilk düğüm mü?" kontrolü döngü içinden çıkar.

## Ownership

LeetCode bazı problemlerde düğümleri yalnız yeniden bağlamanı, bazılarında silinen
düğümü `free` etmeni bekleyebilir. Platform sözleşmesini oku. Gerçek projede liste
API'si düğüm belleğinin sahibini açıkça tanımlamalıdır.

## C Riskleri

Use-after-free, bağlantıyı saklamadan ezme, cycle oluşturma ve `head == NULL`
durumunu unutma yaygındır. Şema çizmek koddan önce pointer rollerini sabitler.

## Bu Repoda Çalış

[206 - Reverse Linked List](../../../problems/0206-reverse-linked-list/README.md), [21 - Merge Two Sorted Lists](../../../problems/0021-merge-two-sorted-lists/README.md), [82 - Remove Duplicates from Sorted List II](../../../problems/0082-remove-duplicates-from-sorted-list-ii/README.md) ve [2 - Add Two Numbers](../../../problems/0002-add-two-numbers/README.md).

## Sistem Bağı

Intrusive list, free-list ve buffer descriptor zincirlerinde değer kopyalamadan
pointer bağlantısı değiştirilir. Hata burada doğrudan bellek bütünlüğünü etkiler.

