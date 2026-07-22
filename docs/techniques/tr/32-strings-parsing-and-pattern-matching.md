# 32 - String (Karakter Dizisi), Parsing (Ayrıştırma) ve Pattern Matching (Örüntü Eşleme)

[Önceki](31-bitwise-xor-and-number-theory.md) | [İçindekiler](README.md) | [English](../en/32-strings-parsing-and-pattern-matching.md) | [Sonraki](33-matrix-traversal-and-directions.md)

> Terimler: **String (Karakter Dizisi)**, **Parsing (Ayrıştırma)**, **Pattern Matching (Örüntü Eşleme)**.

## Zihinsel Model

C string'i `char` dizisi ve sonundaki `\0` karakteridir. Parsing, bu karakter akışını
anlamlı token veya state geçişlerine dönüştürür. Pattern matching ise bir örüntünün
nerede başladığını belirler; yalnız eşitlik değil, aday başlangıçların nasıl elendiği
önemlidir.

Karakter `'7'`, string `"7"` ve sayı `7` farklı temsillerdir. Dönüşüm açık yapılır:
`digit = c - '0'`.

## Parser State'i

Bir sayı parser'ı işaret, basamak görülüp görülmediği, decimal ve exponent gibi küçük
durumlarla ifade edilebilir. Her yeni karakter yalnız mevcut state'e göre kabul edilir.

```c
long long value = 0;
while (isdigit((unsigned char)*p)) {
    int digit = *p - '0';
    if (value > (limit - digit) / 10) return overflow_result;
    value = value * 10 + digit;
    p++;
}
```

Overflow çarpımdan sonra değil önce sınanır; aksi halde C signed overflow oluşmuş olur.

## Pattern Matching Seviyeleri

Naive yöntem her başlangıcı karşılaştırır ve O(nm) olabilir. KMP, pattern içindeki
prefix/suffix bilgisini kullanarak metin indeksini geri götürmez. Rolling hash window
özetini hızlı günceller fakat collision nedeniyle eşleşmeyi doğrulamak gerekebilir.
Trie, birçok kelimenin ortak prefix'ini düğüm paylaşarak saklar.

## Invariant

Parser'da state, işlenmiş prefix'in hangi grammar sınıfında olduğunu tam temsil eder.
Matcher'da elenmiş başlangıçların artık tam eşleşme üretemeyeceği kanıtlanır.

## C Riskleri

`ctype.h` fonksiyonlarına negatif signed char vermemek için `unsigned char` cast et.
Allocation'da `n + 1`, null terminator, buffer kapasitesi ve input ownership'i korunur.

## Bu Repoda Çalış

[8 - String to Integer (atoi)](../../../problems/0008-string-to-integer-atoi/README.md), [65 - Valid Number](../../../problems/0065-valid-number/README.md), [28 - Find the First Occurrence](../../../problems/0028-find-the-index-of-the-first-occurrence-in-a-string/README.md), [468 - Validate IP Address](../../../problems/0468-validate-ip-address/README.md), [1461 - Contains All Binary Codes](../../../problems/1461-check-if-a-string-contains-all-binary-codes-of-size-k/README.md) ve [3093 - Longest Common Suffix Queries](../../../problems/3093-longest-common-suffix-queries/README.md).

## Sistem Bağı

Komut satırı, telemetri frame'i, NMEA benzeri mesajlar ve binary header doğrulaması
parser state machine gerektirir. Uzunluk kontrollü API'ler ham buffer için daha güvenlidir.
