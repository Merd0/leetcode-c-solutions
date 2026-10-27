# Denemeler ve Öğrenme Notları

**[English](ATTEMPTS.md) | Türkçe**

[Türkçe ana sayfa](../README_TR.md) | [Problem indeksi (EN, otomatik)](PROBLEM_INDEX.md) | [İlk 100 rotası](LEARNING_ROADMAP.tr.md) | [Türkçe teknik rehber](techniques/tr/README.md)

Denemeler, kabul edilmiş (Accepted) çözümlerden ayrı tutulur ve toplam çözüm sayısına dahil edilmez.

| # | Problem | Sonuç | Neden başarısız? | Tekrar öncesi konu | Sonraki yaklaşım |
| ---: | --- | --- | --- | --- | --- |
| #3691 | [Maximum Total Subarray Value II](../attempts/3691-maximum-total-subarray-value-ii/) | TLE | Tüm `O(n^2)` alt dizi değerlerini oluşturup sıralıyor | Max heap, segment tree aralık sorguları, best-first search | Bütün alt diziler yerine yalnızca sıradaki en iyi adayları üret |

Her deneme klasörü orijinal kodu ve gerekçeleri korur. Deneme Accepted olursa `problems/` altında asıl klasörü oluştur; başarısız kodu, iyileştirilmiş çözümü belgelemeden sessizce `solution.c` olarak değiştirme.
