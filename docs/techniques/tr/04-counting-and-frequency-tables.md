# 04 - Counting (Sayma) ve Frequency Table (Frekans Tablosu)

[Önceki](03-simulation-and-state-machines.md) | [İçindekiler](README.md) | [English](../en/04-counting-and-frequency-tables.md) | [Sonraki](05-hash-tables.md)

> Terimler: **Counting (Sayma)**, **Frequency Table (Frekans Tablosu)**.

## Zihinsel Model

Değerlerin gelebileceği uzay küçük ve biliniyorsa her değeri doğrudan bir dizi
indeksine eşleyebilirsin. Büyük veri listesini tekrar tekrar taramak yerine, veri
hakkındaki dağılımı küçük bir `freq` tablosunda özetlersin.

`'A'..'Z'` için indeks `c - 'A'`, `1..9` için `c - '1'` olur. Bu çıkarma karakteri
sayısal kimliğe dönüştürür; ham ASCII kodunu küçük diziye indeks olarak vermek
taşmaya yol açabilir.

## Invariant

`i` eleman işlendiğinde `freq[v]`, ilk `i + 1` eleman içinde `v` değerinin tam
sayısını tutar.

```c
int freq[26] = {0};
for (int i = 0; s[i] != '\0'; i++) {
    int index = s[i] - 'a';
    freq[index]++;
}
```

Tablo kurulduktan sonra "kaç farklı değer", "en sık değer", "iki dağılım eşit mi"
gibi sorular ana girdiden bağımsız olarak küçük domain üzerinde çözülür.

## Dizi mi Hash Table mı?

Anahtarlar küçük, yoğun ve sınırları biliniyorsa dizi daha basit ve deterministiktir.
Anahtarlar geniş, seyrek veya string ise hash table gerekir. `freq[1000000000]`
teorik olarak doğrudan erişim sağlasa da pratik bir çözüm değildir.

## Ne Zaman Yetmez?

Sıra bilgisi önemliyse frekans tek başına yetmez. `aab` ile `aba` aynı frekansa
sahiptir ama ardışıklıkları farklıdır. Bu durumda window, stack veya parser state'i
gerekebilir.

## Maliyet ve C Riskleri

Girdiyi kurmak O(n), tabloyu taramak O(domain) zamandır. İndeks dönüşümünden önce
karakterin gerçekten beklenen aralıkta olduğunu doğrula. Sayaç üst sınırını düşün.

## Bu Repoda Çalış

[242 - Valid Anagram](../../../problems/0242-valid-anagram/README.md), [383 - Ransom Note](../../../problems/0383-ransom-note/README.md) ve [1365 - How Many Numbers Are Smaller Than the Current Number](../../../problems/1365-how-many-numbers-are-smaller-than-the-current-number/README.md) frekans tablosunu farklı amaçlarla kullanır.

## Sistem Bağı

Histogram, hata kodu sayacı, piksel yoğunluk dağılımı ve mesaj türü istatistiği
aynı yapıdır. Sabit domain, çalışma süresini ve bellek kullanımını öngörülebilir yapar.
