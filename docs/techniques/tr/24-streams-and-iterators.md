# 24 - Stream (Akış) ve Iterator (Yineleyici)

[Önceki](23-heap-and-top-k.md) | [İçindekiler](README.md) | [English](../en/24-streams-and-iterators.md) | [Sonraki](25-stateful-apis-design-and-ownership.md)

> Terimler: **Stream (Akış)**, **Iterator (Yineleyici)**.

## Zihinsel Model

Stream probleminde bütün girdi baştan bilinmez. Her çağrı yeni veri getirir ve
nesne, gelecekteki cevap için yeterli geçmiş state'ini saklar. Iterator ise sıkıştırılmış
veya parçalı temsili, öğeler tek tek üretiliyormuş gibi tüketir.

Ana tasarım sorusu şudur: Gelecek çağrıyı doğru cevaplamak için geçmişin tamamı mı,
yoksa küçük bir özet mi gerekiyor?

## Invariant

RLE iterator'da `index` mevcut koşu çiftini, `remaining` o koşuda henüz tüketilmemiş
adet sayısını temsil eder. Her `next(n)` çağrısından sonra toplam tüketim tam n artar
ve state ilk tüketilmemiş konumu gösterir.

```c
while (n > current_count && index < length) {
    n -= current_count;
    index += 2;
    load_current_run();
}
consume_from_current(n);
```

Gerçek elemanları genişletmek yerine run sayıları üzerinden ilerlemek hem belleği
hem zamanı sıkıştırılmış temsil boyutuna bağlar.

## Online ve Offline Farkı

Offline algoritma geleceği görebilir ve sıralama yapabilir. Online stream çözümü
kararı yalnız geçmiş ve mevcut veriyle verir. Bu kısıt bazen monotonic stack, queue,
heap veya prefix state gibi özetleri zorunlu kılar.

## Ne Zaman Kullanılmaz?

Gelecekteki bir öğe geçmiş cevabı değiştirebiliyorsa ve düzeltme yapılamıyorsa tam
online sonuç mümkün olmayabilir. API'nin gecikmeli cevap veya ikinci geçiş verip
vermediği incelenmelidir.

## C Riskleri

Çağrılar arasında local değişkenler kaybolur; state struct içinde tutulmalıdır.
Sayaç tüketiminde overflow, stream sonu ve boş run'lar açıkça yönetilmelidir.

## Bu Repoda Çalış

[900 - RLE Iterator](../../../problems/0900-rle-iterator/README.md), [901 - Online Stock Span](../../../problems/0901-online-stock-span/README.md), [933 - Number of Recent Calls](../../../problems/0933-number-of-recent-calls/README.md), [1352 - Product of the Last K Numbers](../../../problems/1352-product-of-the-last-k-numbers/README.md) ve [1656 - Design an Ordered Stream](../../../problems/1656-design-an-ordered-stream/README.md).

## Sistem Bağı

Sensör örnekleri ve haberleşme paketleri doğal stream'lerdir. Tüm geçmişi saklamak
yerine bounded state taşımak RAM ve gecikme açısından kritik olabilir.
