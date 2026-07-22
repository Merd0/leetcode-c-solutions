# C ile Problem Çözme Teknikleri

[Dil seçimi](../README.md) | [English](../en/README.md) | [Repo ana sayfası](../../../README_TR.md) | [Problem indeksi](../../PROBLEM_INDEX.md) | [Konu indeksi](../../TOPIC_INDEX.md)

Bu rehber, repoda çözülen problemlerde tekrar eden düşünme biçimlerini ayrı
bölümlere ayırır. Amaç kod kalıbı ezberletmek değil; problemi görünce doğru state'i
seçebilmek, döngü boyunca korunacak değişmezi kurabilmek ve çözümün neden doğru
olduğunu açıklayabilmektir.

Her bölüm şu sırayı izler:

1. Problemin zihinsel modeli ve tekniği çağıran sinyaller.
2. Tutulan state, invariant ve state geçişi.
3. Çözümün neden çalıştığı ve hangi varsayıma dayandığı.
4. Küçük bir C iskeleti, sınırlar ve bellek riskleri.
5. Tekniğin uygun olmadığı durumlar ve bu repodan çalışma sırası.
6. Gömülü sistem veya elektro-optik düşünceyle bağlantı.

## Terminoloji Standardı

Teknik adlarında önce uluslararası kaynaklarda ve LeetCode'da karşılaşacağın
İngilizce terim, hemen ardından parantez içinde Türkçe karşılığı kullanılır:
`Brute Force (Kaba Kuvvet)`, `Stack (Yığın)`, `Sliding Window (Kayan Pencere)`.
Bölüm içindeki ilk kullanım bu eşleşmeyi öğretir; devamında okunabilirliğe göre
İngilizce kısa ad kullanılabilir.

## Bölümler

| No | Teknik | Ana fikir |
| --- | --- | --- |
| 01 | [Brute Force (Kaba Kuvvet) ve Enumeration (Numaralandırma)](01-brute-force-and-enumeration.md) | Doğru referans çözümü kur, sonra tekrarlanan işi bul. |
| 02 | [Linear Scan (Doğrusal Tarama) ve Indexing (İndeksleme)](02-linear-scan-and-indexing.md) | Tek geçişte yeterli state'i taşı. |
| 03 | [Simulation (Simülasyon) ve State Machine (Durum Makinesi)](03-simulation-and-state-machines.md) | Komutları açık durum geçişlerine dönüştür. |
| 04 | [Counting (Sayma) ve Frequency Table (Frekans Tablosu)](04-counting-and-frequency-tables.md) | Küçük bir değer uzayını doğrudan indeksle. |
| 05 | [Hash Table (Karma Tablo)](05-hash-tables.md) | Geniş anahtar uzayında ortalama O(1) erişim kur. |
| 06 | [Two Pointers (İki İşaretçi)](06-two-pointers.md) | İki sınırı tek yönlü ve anlamlı biçimde hareket ettir. |
| 07 | [In-Place Read/Write (Yerinde Okuma/Yazma)](07-in-place-read-write.md) | Okunan bölge ile geçerli çıktı bölgesini ayır. |
| 08 | [Fixed-Size Sliding Window (Sabit Boyutlu Kayan Pencere)](08-fixed-sliding-window.md) | Bir eleman çıkarıp bir eleman ekleyerek pencereyi taşı. |
| 09 | [Variable-Size Sliding Window (Değişken Boyutlu Kayan Pencere)](09-variable-sliding-window.md) | Geçerlilik bozulana kadar büyüt, düzelene kadar küçült. |
| 10 | [Prefix Sum (Önek Toplam)](10-prefix-sums.md) | Aralık sorgusunu iki birikimli değer farkına çevir. |
| 11 | [Prefix State (Önek Durumu), XOR (Özel Veya) ve Product (Çarpım)](11-prefix-state-xor-and-product.md) | Toplam dışındaki birleşebilir özetleri taşı. |
| 12 | [Difference Array (Fark Dizisi) ve Event Sweep (Olay Taraması)](12-difference-arrays-and-event-sweeps.md) | Aralığın içini değil, başladığı ve bittiği noktayı kaydet. |
| 13 | [Binary Search on Sorted Data (Sıralı Veride İkili Arama)](13-binary-search-on-sorted-data.md) | Cevap olamayacak yarıyı kanıtla at. |
| 14 | [Binary Search on Answer (Cevap Üzerinde İkili Arama)](14-binary-search-on-answer.md) | Monoton bir uygunluk testi üzerinden en küçük/büyük cevabı bul. |
| 15 | [Sorting (Sıralama) ve Bucket (Kova)](15-sorting-and-buckets.md) | Ön işlemle yerel kararları görünür yap. |
| 16 | [Divide-and-Conquer (Böl ve Yönet) ve Selection (Seçim)](16-divide-conquer-and-selection.md) | Problemi böl veya yalnız gereken sıralama konumunu ara. |
| 17 | [Greedy (Açgözlü Yaklaşım)](17-greedy.md) | Yerel seçimin geleceği bozmadığını bir invariant ile göster. |
| 18 | [Intervals (Aralıklar)](18-intervals.md) | Sıralanmış aralıkları tek aktif aralıkla yönet. |
| 19 | [Stack (Yığın)](19-stack.md) | En son açılan işi ilk kapat. |
| 20 | [Monotonic Stack (Monoton Yığın)](20-monotonic-stack.md) | Artık cevap olamayacak adayları yığından çıkar. |
| 21 | [Queue (Kuyruk) ve Circular Buffer (Dairesel Tampon)](21-queue-and-circular-buffer.md) | FIFO düzenini sabit maliyetli indekslerle koru. |
| 22 | [Monotonic Queue (Monoton Kuyruk)](22-monotonic-queue.md) | Kayan pencerenin en iyi adaylarını sıralı tut. |
| 23 | [Heap (Öbek) ve Top-K (En İyi K)](23-heap-and-top-k.md) | Tüm sıralama yerine yalnız en güçlü K adayı koru. |
| 24 | [Stream (Akış) ve Iterator (Yineleyici)](24-streams-and-iterators.md) | Geleceği bilmeden yeterli geçmiş state'ini taşı. |
| 25 | [Stateful API (Durum Tutan API), Design (Tasarım) ve Ownership (Sahiplik)](25-stateful-apis-design-and-ownership.md) | Nesne ömrünü, invariant'ı ve bellek sahibini birlikte tasarla. |
| 26 | [Linked-List Rewiring (Bağlı Liste Bağlantılarını Değiştirme)](26-linked-list-rewiring.md) | Değerlerden çok bağlantıları güvenle yeniden kur. |
| 27 | [Fast and Slow Pointers (Hızlı ve Yavaş İşaretçiler)](27-fast-and-slow-pointers.md) | Farklı hızlarla döngü veya orta nokta bilgisi üret. |
| 28 | [Recursion (Özyineleme) ve Backtracking (Geri İzleme)](28-recursion-and-backtracking.md) | Alt problemin sözleşmesini tanımla, seçimi geri al. |
| 29 | [Tree and Graph Traversal (Ağaç ve Graf Gezinmesi)](29-tree-and-graph-traversal.md) | Ziyaret düzenini DFS/BFS amacına göre seç. |
| 30 | [Dynamic Programming (Dinamik Programlama) ve Kadane](30-dynamic-programming-and-kadane.md) | Tekrarlanan alt problem state'ini sakla. |
| 31 | [Bitwise (Bit Düzeyi), XOR (Özel Veya) ve Number Theory (Sayı Teorisi)](31-bitwise-xor-and-number-theory.md) | Bitleri bağımsız durumlar olarak işle. |
| 32 | [String (Karakter Dizisi), Parsing (Ayrıştırma) ve Pattern Matching (Örüntü Eşleme)](32-strings-parsing-and-pattern-matching.md) | Metni karakter akışı ve parser state'i olarak oku. |
| 33 | [Matrix Traversal (Matris Gezinmesi) ve Direction Arrays (Yön Dizileri)](33-matrix-traversal-and-directions.md) | Satır/sütun sözleşmesini ve komşu hareketlerini sabitle. |
| 34 | [Matrix Neighborhoods (Matris Komşulukları) ve In-Place State (Yerinde Durum)](34-matrix-neighborhoods-and-in-place-state.md) | Yerel çevreyi sınır kontrollü işle, eski/yeni state'i ayır. |
| 35 | [2D Prefix Sum (2B Önek Toplamı) ve Image Regions (Görüntü Bölgeleri)](35-2d-prefix-sum-and-image-regions.md) | Dikdörtgen bölgeyi dört prefix değeriyle hesapla. |

## Çalışma Biçimi

Bir bölümü okuduktan sonra önce C iskeletini kapatıp invariant'ı kendi cümlenle
söyle. Ardından verilen ilk problemi notsuz çöz. Kod çalışsa bile invariant'ı
açıklayamıyorsan teknik henüz kalıcı hale gelmemiş demektir.

## C Temellerine Dönüş Köprüleri

Sorunun algoritmasını anladığın halde pointer, allocation, bit genişliği veya parser
ayrıntısında takılıyorsan konuya `c-systems-foundation` üzerinden dön:

- [Diziler](https://github.com/Merd0/c-systems-foundation/tree/main/tr/arrays)
- [Pointer'lar](https://github.com/Merd0/c-systems-foundation/tree/main/tr/pointers)
- [Bellek yönetimi](https://github.com/Merd0/c-systems-foundation/tree/main/tr/memory_management)
- [Veri yapıları](https://github.com/Merd0/c-systems-foundation/tree/main/tr/data_structures)
- [Bitwise işlemler](https://github.com/Merd0/c-systems-foundation/tree/main/tr/bitwise)
- [String ve parsing](https://github.com/Merd0/c-systems-foundation/tree/main/tr/strings_parsing)
- [Algoritmalar](https://github.com/Merd0/c-systems-foundation/tree/main/tr/algorithms)
- [LeetCode öğrenme köprüsü](https://github.com/Merd0/c-systems-foundation/blob/main/tr/notes/leetcode_bridge.md)
