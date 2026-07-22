# 17 - Greedy (Açgözlü Yaklaşım)

[Önceki](16-divide-conquer-and-selection.md) | [İçindekiler](README.md) | [English](../en/17-greedy.md) | [Sonraki](18-intervals.md)

> Terim: **Greedy (Açgözlü Yaklaşım)**.

## Zihinsel Model

Greedy çözüm her adımda yerel olarak en iyi görünen kararı verir ve bu kararı geri
almaz. Tekniğin zor kısmı kararı bulmak değil, bu kararın optimal geleceği yok
etmediğini kanıtlamaktır.

"En büyüğü seçtim" tek başına greedy kanıtı değildir. Exchange argument ile herhangi
bir optimal çözümün ilk seçimini greedy seçimle değiştirince sonucun kötüleşmediği
veya invariant ile greedy state'in gelecek için en avantajlı özet olduğu gösterilir.

## Örnek Invariant

Jump Game'de `farthest`, işlenen prefix kullanılarak ulaşılabilen en uzak indekstir.

```c
int farthest = 0;
for (int i = 0; i < n; i++) {
    if (i > farthest) return false;
    if (i + a[i] > farthest) farthest = i + a[i];
}
return true;
```

Daha kısa bir sıçramayı ayrı ayrı denemek gerekmez; gelecekte önemli olan hangi
yolla gelindiği değil, ulaşılabilen en uzak sınırdır.

## Greedy Sinyalleri

Kararın geçmişe dönmeden verilmesi, state'in tek bir "en iyi sınır" ile özetlenmesi,
sıralama sonrası en erken biten/en ucuz seçimin geleceğe daha çok alan bırakması.

## Ne Zaman Şüphelenmeli?

Yerel seçim gelecek seçenekleri farklı biçimde kilitliyorsa ve state tek özetle
temsil edilemiyorsa DP gerekebilir. Küçük karşı örnekler üretip greedy kuralını kırmaya çalış.

## Maliyet ve C Riskleri

Çoğu greedy çözüm O(n) veya sıralama yüzünden O(n log n)'dir. `i + a[i]` overflow'u,
yanlış tie-break ve kanıtlanmamış sıralama yönü dikkat ister.

## Bu Repoda Çalış

[55 - Jump Game](../../../problems/0055-jump-game/README.md), [134 - Gas Station](../../../problems/0134-gas-station/README.md), [621 - Task Scheduler](../../../problems/0621-task-scheduler/README.md) ve [2126 - Destroying Asteroids](../../../problems/2126-destroying-asteroids/README.md).

## Sistem Bağı

Hazır görevler arasından seçim veya sınırlı kaynak dağıtımı greedy görünebilir;
deadline ve worst-case gereksinimleri varsa yerel kuralın kanıtı özellikle önemlidir.
