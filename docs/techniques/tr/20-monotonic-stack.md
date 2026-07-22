# 20 - Monotonic Stack

[Önceki](19-stack.md) | [İçindekiler](README.md) | [English](../en/20-monotonic-stack.md) | [Sonraki](21-queue-and-circular-buffer.md)

## Zihinsel Model

Monotonic stack, henüz cevabı bulunmamış adayları değerlerine göre artan veya azalan
düzende tutar. Yeni eleman bazı eski adayların cevabıysa bu adaylar pop edilir.
Pop edilen aday bir daha gerekli değildir; yeni eleman ona hem daha yakındır hem de
aranan büyüklük koşulunu sağlamıştır.

Stack'te çoğu zaman değer değil indeks tutulur. İndeks hem değere erişim hem mesafe
hesabı sağlar.

## Invariant

Sonraki daha büyük eleman için stack'teki indekslerin değerleri tepeden aşağı uygun
monoton sıradadır ve hepsi henüz daha büyük bir sağ eleman görmemiştir.

```c
for (int i = 0; i < n; i++) {
    while (top > 0 && a[stack[top - 1]] < a[i]) {
        int index = stack[--top];
        answer[index] = a[i];
    }
    stack[top++] = i;
}
```

Her indeks bir kez push, en fazla bir kez pop edilir. İç `while` bu yüzden toplamda
O(n) çalışır.

## Yön ve Eşitlik Seçimi

"Daha büyük" ile "daha büyük veya eşit" farklı pop koşulları ister. Sağdaki ilk
cevap mı, soldaki ilk cevap mı arandığı tarama yönünü belirler. Bu kararları örnekten
değil soru sözleşmesinden türet.

## Ne Zaman Kullanılmaz?

Sorgu en yakın adayla sınırlı değilse veya adaylar monoton biçimde elenemiyorsa heap,
segment tree ya da başka yapı gerekebilir.

## C Riskleri

Circular dizide iki tur tararken gerçek indeks `i % n` olur fakat aynı indeks ikinci
turda tekrar push edilmemelidir. Sonuç dizisini `-1` ile başlatmak unutulmamalıdır.

## Bu Repoda Çalış

[496 - Next Greater Element I](../../../problems/0496-next-greater-element-i/README.md), [503 - Next Greater Element II](../../../problems/0503-next-greater-element-ii/README.md), [739 - Daily Temperatures](../../../problems/0739-daily-temperatures/README.md), [901 - Online Stock Span](../../../problems/0901-online-stock-span/README.md) ve [1475 - Final Prices](../../../problems/1475-final-prices-with-a-special-discount-in-a-shop/README.md).

## Sistem Bağı

Bir örneğin sonraki eşik aşımına uzaklığı veya online span hesabı, zaman serilerinde
monotonic aday eleme olarak görülebilir.

