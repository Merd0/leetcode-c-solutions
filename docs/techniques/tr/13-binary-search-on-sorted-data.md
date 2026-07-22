# 13 - Sıralı Veride Binary Search

[Önceki](12-difference-arrays-and-event-sweeps.md) | [İçindekiler](README.md) | [English](../en/13-binary-search-on-sorted-data.md) | [Sonraki](14-binary-search-on-answer.md)

## Zihinsel Model

Binary search yalnız `mid` hesaplamak değildir. Her karşılaştırma sonunda cevap
olamayacağı kanıtlanan yarıyı arama uzayından çıkarma yöntemidir. Bunun için veri
veya aranan özellik monoton olmalıdır.

Önce arama aralığının kapalı `[left, right]` mı, yarı açık `[left, right)` mı
olduğunu seç. Döngü koşulu ve sınır güncellemeleri bu sözleşmeden türemelidir.

## Kapalı Aralık Invariant'ı

Hedef mevcutsa her iterasyon başında `[left, right]` içindedir.

```c
int left = 0, right = n - 1;
while (left <= right) {
    int mid = left + (right - left) / 2;
    if (a[mid] == target) return mid;
    if (a[mid] < target) left = mid + 1;
    else right = mid - 1;
}
return -1;
```

`mid` zaten sınandığı için başarısız tarafta aralık `mid + 1` veya `mid - 1` ile
daralır. Aksi halde döngü aynı state'te kalabilir.

## Tepe ve Döndürülmüş Diziler

Binary search tam sıralı diziden daha geniştir. Döndürülmüş dizide en az bir yarı
sıralıdır; tepe aramasında `a[mid] < a[mid + 1]` bilgisi tepenin sağda olduğunu
gösterir. Her varyantta atılan yarının kanıtı yeniden kurulmalıdır.

## Ne Zaman Kullanılmaz?

Veri sıralı değilse veya predicate bir kez `false` olduktan sonra tekrar `true`
olabiliyorsa yarı eleme güvenli değildir. Küçük n için doğrusal tarama daha sade olabilir.

## Maliyet ve C Riskleri

Zaman O(log n), alan iteratif çözümde O(1)'dir. `mid = (left + right) / 2` overflow
yapabilir; `mid + 1` okunan varyantlarda `mid < n - 1` aralık sözleşmesi kurulmalıdır.

## Bu Repoda Çalış

[704 - Binary Search](../../../problems/0704-binary-search/README.md), [34 - First and Last Position](../../../problems/0034-find-first-and-last-position-of-element-in-sorted-array/README.md), [153 - Find Minimum in Rotated Sorted Array](../../../problems/0153-find-minimum-in-rotated-sorted-array/README.md) ve [74 - Search a 2D Matrix](../../../problems/0074-search-a-2d-matrix/README.md).

## Sistem Bağı

Kalibrasyon tablosunda eşik bulma, zaman damgalı kayıtta ilk uygun örneği arama ve
LUT içinde en yakın sınırı seçme aynı monoton arama fikridir.

