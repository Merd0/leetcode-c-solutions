# 21 - Queue ve Circular Buffer

[Önceki](20-monotonic-stack.md) | [İçindekiler](README.md) | [English](../en/21-queue-and-circular-buffer.md) | [Sonraki](22-monotonic-queue.md)

## Zihinsel Model

Queue ilk giren elemanın ilk çıktığı FIFO yapısıdır. Olaylar geliş sırasına göre
işlenecekse, katman katman traversal yapılacaksa veya üretici ile tüketici arasında
buffer gerekiyorsa temel model queue'dur.

Circular buffer sabit dizinin sonunu başına bağlar. Böylece pop sonrası bütün
elemanları kaydırmak yerine `front` ve `rear` indeksleri modulo kapasiteyle ilerler.

## State Sözleşmesi

Bir tasarım seç: `front` ilk eleman, `rear` sonraki boş hücre ve `size` eleman sayısı
olsun. Boşluk `size == 0`, doluluk `size == capacity` ile belirlenir.

```c
buffer[rear] = value;
rear = (rear + 1) % capacity;
size++;

int value = buffer[front];
front = (front + 1) % capacity;
size--;
```

`size` kullanmak, `front == rear` durumunun boş mu dolu mu olduğu belirsizliğini çözer.

## Queue Simülasyonu

Bir problemde aynı katılımcı sonraki tura dönecekse fiziksel olarak diziyi kaydırmak
yerine yeni zaman/indeks değeriyle kuyruğun arkasına eklenebilir. Dota2 Senate
çözümündeki `index + n` bir sonraki tur zamanını bu şekilde temsil eder.

## Ne Zaman Kullanılmaz?

Önceliği en yüksek öğe önce çıkacaksa heap, son giren önce çıkacaksa stack gerekir.
Window maksimumu için sıradan queue gereksiz adayları tutar; monotonic queue daha uygundur.

## C Riskleri

Sıfır kapasite, modulo sıfır, full/empty ayrımı ve integer indeks taşması kontrol
edilmelidir. Queue belleğinin sahibi ve elemanların kopya mı pointer mı olduğu açıktır.

## Bu Repoda Çalış

[622 - Design Circular Queue](../../../problems/0622-design-circular-queue/README.md), [641 - Design Circular Deque](../../../problems/0641-design-circular-deque/README.md), [649 - Dota2 Senate](../../../problems/0649-dota2-senate/README.md) ve [1700 - Number of Students Unable to Eat Lunch](../../../problems/1700-number-of-students-unable-to-eat-lunch/README.md).

## Sistem Bağı

UART RX/TX, DMA örnek blokları ve ISR'dan ana döngüye olay aktarma circular buffer'ın
doğrudan kullanım alanlarıdır. Eşzamanlı erişimde atomicity ayrıca tasarlanmalıdır.

