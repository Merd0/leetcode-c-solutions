# 12 - Difference Array ve Event Sweep

[Önceki](11-prefix-state-xor-and-product.md) | [İçindekiler](README.md) | [English](../en/12-difference-arrays-and-event-sweeps.md) | [Sonraki](13-binary-search-on-sorted-data.md)

## Zihinsel Model

Bir değer `[from, to)` aralığının tamamını etkiliyorsa her konumu tek tek güncellemek
yerine yalnız değişimin başladığı ve bittiği noktayı kaydet. `changes[from] += x`,
`changes[to] -= x` yazılır; sonra prefix toplam aktif değeri geri kurar.

Bu yaklaşım konumları değil olayları saklar. "Burada 3 kişi bindi" ve "burada 3 kişi
indi" bilgisi, aradaki her durakta 3 yazmaktan daha küçüktür.

## Invariant

Sweep sırasında `current`, o konuma kadar başlayan ama henüz bitmemiş bütün
etkilerin toplamıdır.

```c
for (int i = 0; i < event_count; i++) {
    changes[start[i]] += value[i];
    changes[end[i]] -= value[i];
}

int current = 0;
for (int p = 0; p <= max_position; p++) {
    current += changes[p];
    check(current);
}
```

`[start, end)` seçimi önemlidir: `end` konumunda etki artık aktif değildir.

## Dizi mi Sıralı Event Listesi mi?

Koordinat sınırı küçükse doğrudan `changes[max + 1]` kullanılır. Konumlar çok büyük
ve seyrekse `(position, delta)` olayları listelenip konuma göre sıralanır. Aynı
konumdaki delta'lar birlikte uygulanmalıdır.

## Ne Zaman Kullanılmaz?

Her güncellemeden hemen sonra rastgele sorgu gerekiyorsa tek seferlik sweep yetmez.
Dinamik aralık güncelleme/sorgu için Fenwick veya segment tree gerekebilir.

## Maliyet ve C Riskleri

Küçük koordinatta O(n + U), sıralı event ile O(n log n) zaman kullanılır. En büyük
konumu bulmadan dizi ayırmak, `to` hücresini eksik bırakmak ve kapalı/yarı açık
aralıkları karıştırmak kritik hatalardır.

## Bu Repoda Çalış

[1094 - Car Pooling](../../../problems/1094-car-pooling/README.md) doğrudan difference array uygular. Aralıkların örtüşme anlamını pekiştirmek için [495 - Teemo Attacking](../../../problems/0495-teemo-attacking/README.md) ile karşılaştır.

## Sistem Bağı

Zaman çizelgesinde aktif görev sayısı, güç bütçesi, kanal kullanımı veya tarama
bölgesindeki etkin konfigürasyonlar event sweep ile modellenebilir.

