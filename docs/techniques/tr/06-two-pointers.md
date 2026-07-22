# 06 - İki İşaretçi

[Önceki](05-hash-tables.md) | [İçindekiler](README.md) | [English](../en/06-two-pointers.md) | [Sonraki](07-in-place-read-write.md)

## Zihinsel Model

İki işaretçi, iki indeksi rastgele oynatmak değildir. Her hareketin cevap olamayacak
bir bölgeyi kanıtla elemesi gerekir. İşaretçiler iki uçtan yaklaşabilir, aynı yönde
farklı hızlarda ilerleyebilir veya iki ayrı diziyi birleştirebilir.

Sıralılık, monotonluk veya "kötü olan sınırı hareket ettir" kuralı çoğu iki
işaretçi çözümünün temel varsayımıdır.

## Invariant

Sıralı dizide hedef toplam ararken `left` ve `right` dışındaki elenmiş çiftlerin
hedef olamayacağı bilinir.

```c
while (left < right) {
    long long sum = (long long)a[left] + a[right];
    if (sum == target) return true;
    if (sum < target) left++;
    else right--;
}
```

Toplam küçükse `right` ile eşleşen daha küçük bir sol değer de toplamı büyütemez;
bu yüzden `left` güvenle ilerler. Doğruluk hareketin bu kanıtından gelir.

## Teknik Sinyalleri

- Veri sıralı veya sıralanabilir.
- Çift, palindrom ya da iki uç arasında karar aranıyor.
- Bir diziyi yerinde filtrelemek gerekiyor.
- İki sıralı akış birlikte tüketiliyor.

## Ne Zaman Çalışmaz?

Sıralı olmayan veride toplamın yönü bilinmiyorsa hangi işaretçinin hareket edeceği
kanıtlanamaz. Negatif değerler bazı window problemlerindeki monotonluğu da bozabilir.

## Maliyet ve C Riskleri

Her işaretçi en fazla n kez hareket ederse zaman O(n), ek alan O(1)'dir. Toplamlarda
overflow, `left <= right` ile aynı elemanı iki kez kullanma ve sınır sonrası erişim
yaygın hatalardır.

## Bu Repoda Çalış

[167 - Two Sum II](../../../problems/0167-two-sum-ii-input-array-is-sorted/README.md), [11 - Container With Most Water](../../../problems/0011-container-with-most-water/README.md), [15 - 3Sum](../../../problems/0015-3sum/README.md) ve [977 - Squares of a Sorted Array](../../../problems/0977-squares-of-a-sorted-array/README.md).

## Sistem Bağı

Sıralı zaman damgalarını birleştirme, iki sensör akışını hizalama ve çerçeve
sınırlarını karşılaştırma iki işaretçi düşüncesinin pratik karşılıklarıdır.

