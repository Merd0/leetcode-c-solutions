# LeetCode C Çözümleri

[English](README.md) | Türkçe

C temellerini algoritma, veri yapısı ve gömülü sistem odaklı problem çözme pratiğine dönüştüren düzenli bir çalışma arşivi.

[İlk 100 Rotası](docs/LEARNING_ROADMAP.tr.md) | [Teknik Rehberi](docs/techniques/tr/README.md) | [Tüm Çözümler (EN, otomatik)](docs/PROBLEM_INDEX.md) | [Konu İndeksi (EN, otomatik)](docs/TOPIC_INDEX.md) | [Pratik Blokları](docs/PRACTICE_TRACKS.tr.md) | [Denemeler](docs/ATTEMPTS.tr.md) | [English](README.md)

## Nereden Başlamalıyım?

- Temelden sırayla ilerlemek için [İlk 100 öğrenme rotasını](docs/LEARNING_ROADMAP.tr.md) takip et.
- Bir tekniğin neden ve ne zaman çalıştığını öğrenmek için [35 bölümlük problem çözme teknikleri rehberini](docs/techniques/tr/README.md) aç.
- Belirli bir çözümü bulmak için [tam problem indeksini (EN, otomatik)](docs/PROBLEM_INDEX.md) aç.
- Bitwise, matrix, stack, linked list veya sliding window tekrarı için [konu indeksini (EN, otomatik)](docs/TOPIC_INDEX.md) kullan.
- Gömülü sistem ve elektro-optik hazırlığı için [odaklı pratik bloklarına](docs/PRACTICE_TRACKS.tr.md) geç.
- Kabul edilmemiş eski bir fikre dönmek için [denemeler belgesini](docs/ATTEMPTS.tr.md) aç.

Güncel accepted, zorluk dağılımı ve attempt sayıları İngilizce ana sayfadaki script tarafından üretilen [Current Snapshot](README.md#current-snapshot) bölümünde tutulur; aynı sayı farklı belgelerde elle tekrarlanmaz.

## Belge Düzeni

| İhtiyaç | Git |
| --- | --- |
| Hangi sırayla çözmeliyim? | [Türkçe İlk 100 rotası](docs/LEARNING_ROADMAP.tr.md) |
| Tekniklerin teorisi, seçim sinyalleri ve C kalıpları nerede? | [Türkçe teknik rehberi](docs/techniques/tr/README.md) |
| Bütün accepted çözümler nerede? | [Problem index (EN, otomatik)](docs/PROBLEM_INDEX.md) |
| Belirli bir algoritma konusu nerede? | [Topic index (EN, otomatik)](docs/TOPIC_INDEX.md) |
| Embedded, matrix ve veri yapısı blokları nerede? | [Türkçe pratik blokları](docs/PRACTICE_TRACKS.tr.md) |
| TLE veya eksik denemeler nerede? | [Türkçe denemeler](docs/ATTEMPTS.tr.md) |
| Yeni problem nasıl eklenir? | [Adding a problem (EN)](docs/ADDING_A_PROBLEM.md) |

## Problem Klasörü

Her accepted çözüm aşağıdaki temel yapıyı kullanır:

```text
problems/
  0036-valid-sudoku/
    README.md
    solution.c
```

Problem sayfası kısa ve özgün TR/EN özeti, C imzası, doğrulanmış metadata, yaklaşım ve gerekli C notlarını taşır. Bazı klasörlerde brute-force karşılaştırması veya ikinci accepted yaklaşım için ek `.c` dosyaları bulunabilir.

Accepted olmayan çalışmalar `attempts/` altında kalır ve çözülmüş problem sayısına girmez.

## Repo Doğrulaması

GitHub Actions belge ve klasör yapısını, metadata ile generated indekslerin tutarlılığını, iç bağlantıları ve encoding'i kontrol eder. İndeksleri yeniden üretir ve bu işlem commit edilmemiş bir fark bırakırsa başarısız olur. LeetCode giriş fonksiyonları standalone executable gibi derlenmez.

## C Tarafındaki Öğrenme Değeri

Bu arşiv özellikle pointer-to-pointer, `returnSize`, `returnColumnSizes`, heap allocation, caller ownership, null termination, linked-list yaşam süresi, integer overflow, bit mask ve circular indexing gibi C'ye özgü ayrıntıları görünür tutar.

Bir problem C dilindeki temel eksikliği gösterdiğinde [Merd0/c-systems-foundation](https://github.com/Merd0/c-systems-foundation) reposuna dön. [Türkçe LeetCode köprüsü](https://github.com/Merd0/c-systems-foundation/blob/main/tr/notes/leetcode_bridge.md), konu ile uygun problem pratiği arasındaki geçişi gösterir.

## Repo Durumu

Bu repo gelişmeye devam eden kişisel bir çalışma arşividir. İndeksler ve sayılar `scripts/generate_indexes.py` ile doğrulanır; bütün LeetCode fonksiyonlarının standalone executable olduğu iddia edilmez.
