# 05 - Hash Table (Karma Tablo)

[Önceki](04-counting-and-frequency-tables.md) | [İçindekiler](README.md) | [English](../en/05-hash-tables.md) | [Sonraki](06-two-pointers.md)

> Terim: **Hash Table (Karma Tablo)**.

## Zihinsel Model

Hash table, "bu anahtarı daha önce gördüm mü?" veya "bu anahtara ait özet nedir?"
sorusunu geniş bir anahtar uzayında hızlı cevaplar. Anahtarı küçük bir bucket
indeksine dönüştüren hash fonksiyonu vardır; çakışmalar ayrıca yönetilir.

Counting array ile farkı erişim amacında değil, anahtar uzayındadır. Değerler
`0..25` ise dizi daha iyi; büyük veya seyrek tam sayılar ve stringler için hash
table daha doğal olabilir.

## State ve Invariant

Bir tarama sırasında tablo, işlenmiş prefix hakkında gereken bilgiyi tutar. Two Sum
için invariant şudur: mevcut `x` işlenmeden önce tabloda yalnız geçmiş elemanlar
vardır; `target - x` bulunursa geçerli iki farklı indeks oluşur.

```c
for (int i = 0; i < n; i++) {
    int need = target - a[i];
    if (map_contains(need)) return i;
    map_put(a[i], i);
}
```

Sorgunun eklemeden önce yapılması, aynı elemanın iki kez kullanılmasını önler.

## Çakışma ve Beklenen Maliyet

Farklı anahtarlar aynı bucket'a düşebilir. Chaining veya open addressing bu durumu
çözer. İyi dağılım ve uygun load factor ile arama/ekleme ortalama O(1), kötü
durumda O(n) olabilir. Bu nedenle "hash her zaman O(1)" mutlak bir garanti değildir.

## Ne Zaman Kullanılmaz?

Sıralı dolaşım, en küçük anahtar veya aralık sorgusu gerekiyorsa hash table bunu
doğrudan vermez. Küçük sabit domain için de gereksiz bellek ve karmaşıklık yaratır.

## C Riskleri

C standart kütüphanesinde genel amaçlı hash map yoktur. Anahtar ömrü, kapasite
büyütme, tombstone, çakışma ve `free` sorumluluğu tasarımın parçasıdır.

## Bu Repoda Çalış

[1 - Two Sum](../../../problems/0001-two-sum/README.md), [49 - Group Anagrams](../../../problems/0049-group-anagrams/README.md), [560 - Subarray Sum Equals K](../../../problems/0560-subarray-sum-equals-k/README.md) ve tasarım için [706 - Design HashMap](../../../problems/0706-design-hashmap/README.md).

## Sistem Bağı

Dinamik bellek ve ortalama süre garantisi yüzünden hash table her gerçek zamanlı
sisteme uygun değildir. Sabit kapasiteli tablo kullanılacaksa doluluk ve en kötü
arama süresi baştan sınırlandırılmalıdır.
