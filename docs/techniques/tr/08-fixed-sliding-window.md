# 08 - Sabit Boyutlu Kayan Pencere

[Önceki](07-in-place-read-write.md) | [İçindekiler](README.md) | [English](../en/08-fixed-sliding-window.md) | [Sonraki](09-variable-sliding-window.md)

## Zihinsel Model

Soru bütün ardışık `k` elemanlı grupları soruyorsa her grubun toplamını baştan
hesaplamak gereksizdir. Yan yana iki pencerenin `k - 1` elemanı aynıdır. Pencereyi
sağa taşırken soldaki tek eleman çıkar, sağdaki tek eleman girer.

Bu teknik "subarray" kelimesindeki ardışıklığı kullanır. Alt küme veya rastgele
seçim sorusunda pencere sınırları aynı anlamı taşımaz.

## Invariant

İlk pencere kurulduktan sonra her iterasyonda `sum`, tam olarak son `k` elemanın
toplamıdır.

```c
long long sum = 0;
for (int i = 0; i < k; i++) sum += a[i];

for (int right = k; right < n; right++) {
    sum += a[right];
    sum -= a[right - k];
    /* sum artık [right-k+1, right] penceresine ait */
}
```

`right - k`, yeni eleman girince pencerenin dışında kalan eski sol uçtur.

## Doğruluk Fikri

İlk pencere doğrudan doğru hesaplanır. Sonraki pencere, önceki doğru özetten yalnız
ayrılan değeri çıkarıp yalnız giren değeri ekler. Bu geçiş matematiksel olarak yeni
aralığın toplamını verir; indüksiyonla bütün pencereler doğrudur.

## Ne Zaman Kullanılmaz?

Pencere boyutu cevaba göre değişiyorsa değişken pencere gerekir. Çok sayıda bağımsız
aralık sorgusu varsa prefix sum daha uygundur. `k > n` ve `k == 0` sözleşmeleri
önceden ele alınmalıdır.

## Maliyet ve C Riskleri

Zaman O(n), ek alan O(1)'dir. Ortalama kıyasını bölme yerine `sum >= threshold * k`
ile yapmak hassasiyeti korur; çarpım ve toplam için `long long` gerekebilir.

## Bu Repoda Çalış

[643 - Maximum Average Subarray I](../../../problems/0643-maximum-average-subarray-i/README.md), [1343 - Number of Sub-arrays of Size K](../../../problems/1343-number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/README.md), [1456 - Maximum Number of Vowels](../../../problems/1456-maximum-number-of-vowels-in-a-substring-of-given-length/README.md) ve circular varyant için [1652 - Defuse the Bomb](../../../problems/1652-defuse-the-bomb/README.md).

## Sistem Bağı

Hareketli ortalama, kısa süreli enerji, son N örnekte eşik aşımı ve gürültü ölçümü
sabit pencerenin sinyal işleme karşılıklarıdır.

