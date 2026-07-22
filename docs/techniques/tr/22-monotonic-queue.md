# 22 - Monotonic Queue (Monoton Kuyruk)

[Önceki](21-queue-and-circular-buffer.md) | [İçindekiler](README.md) | [English](../en/22-monotonic-queue.md) | [Sonraki](23-heap-and-top-k.md)

> Terim: **Monotonic Queue (Monoton Kuyruk)**.

## Zihinsel Model

Monotonic queue kayan pencere içindeki maksimum veya minimumu O(1) amortize sorguyla
tutmak için kullanılır. Queue'nun önü mevcut en iyi adaydır; arkada ise gelecekte
en iyi olma şansı kalmış adaylar monoton sırada bulunur.

Yeni değer arkadaki daha zayıf değerlerden hem daha yeni hem daha güçlüyse onları
kalıcı olarak eler. Pencerenin solundan çıkan indeks de önden atılır.

## Invariant

Maksimum için deque içindeki indeksler artan zaman sırasındadır, bu indekslerdeki
değerler önden arkaya azalandır ve bütün indeksler güncel pencere içindedir.

```c
while (front < back && deque[front] <= right - k) front++;
while (front < back && a[deque[back - 1]] <= a[right]) back--;
deque[back++] = right;
int maximum = a[deque[front]];
```

Her indeks bir kez girer ve en fazla bir kez çıkar; toplam zaman O(n)'dir.

## Heap ile Farkı

Heap maksimumu verir fakat pencere dışına çıkan rastgele indeksleri silmek için lazy
deletion gerekir ve maliyet O(log n)'dir. Monotonic queue yalnız sıralı kayan pencere
ekleme/çıkarma düzeninden yararlanarak O(n) toplam süre sağlar.

## Ne Zaman Kullanılmaz?

Window dışındaki rastgele silmeler, Top-K'nin tamamı veya farklı öncelik sorguları
gerekiyorsa heap/tree daha esnektir. Sabit window yoksa monoton aday ömrü tanımsız olabilir.

## C Riskleri

Deque kapasitesi en az n olmalı veya circular tasarlanmalıdır. Önce süresi dolanı
çıkarmak ile yeni değeri ekleme sırası aynı indeks sözleşmesine göre test edilmelidir.

## Bu Repoda Çalış

[239 - Sliding Window Maximum](../../../problems/0239-sliding-window-maximum/README.md) temel ve güçlü örnektir. Önce [503 - Next Greater Element II](../../../problems/0503-next-greater-element-ii/README.md) ile monoton aday eleme fikrini pekiştirmek geçişi kolaylaştırır.

## Sistem Bağı

Son N sensör örneğinin peak değerini her örnekte yeniden taramadan bulmak, alarm ve
envelope takibinde monotonic queue kullanımına dönüşebilir.
