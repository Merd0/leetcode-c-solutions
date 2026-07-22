# 03 - Simulation (Simülasyon) ve State Machine (Durum Makinesi)

[Önceki](02-linear-scan-and-indexing.md) | [İçindekiler](README.md) | [English](../en/03-simulation-and-state-machines.md) | [Sonraki](04-counting-and-frequency-tables.md)

> Terimler: **Simulation (Simülasyon)**, **State Machine (Durum Makinesi)**.

## Zihinsel Model

Simülasyon, problem metnindeki kuralları yürütülebilir state geçişlerine çevirir.
Önemli olan her cümle için ayrı `if` yazmak değil, sistemi tanımlamaya yeten en
küçük state'i seçmektir. Robot için `(x, y, direction)`, kuyruk oyunu için sıra ve
aktif oyuncular bu state olabilir.

Bir durum makinesinde üç parça vardır: mevcut durum, giriş olayı ve yeni durum.
Aynı mevcut durum ve aynı olay her zaman aynı geçişi üretmelidir.

## Yönleri Veri Olarak Tutmak

```c
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int dir = 0;

if (command == 'G') {
    x += dx[dir];
    y += dy[dir];
} else if (command == 'R') {
    dir = (dir + 1) % 4;
} else if (command == 'L') {
    dir = (dir + 3) % 4;
}
```

Burada yön için dört ayrı hareket bloğu yoktur. `dir` state'i hangi `dx, dy`
çiftinin kullanılacağını seçer. Modüler aritmetik dönüşleri kapalı bir çevrimde
tutar.

## Invariant ve Adım Sırası

Her komut sonunda state, o ana kadarki bütün komutlar tam bir kez uygulanmış gibi
olmalıdır. Bir adımın önce hedefini hesaplayıp sonra engel kontrolü yapmak gibi
ara state'leri varsa, gerçek state yalnız geçiş onaylandığında güncellenir.

## Ne Zaman Başka Teknik Gerekir?

Kuralları doğrudan yürütmek çok fazla tekrar veya arama doğurabilir. Her robot
adımında bütün engelleri taramak doğru simülasyondur ama yavaş olabilir; engelleri
hash set'e almak simülasyonun state geçişini değiştirmeden erişimi hızlandırır.

## Maliyet ve C Riskleri

Zaman olay sayısı ile olay başına kontrolün çarpımıdır. Negatif modulo, yanlış
komut değeri, state'in onaydan önce değiştirilmesi ve `strlen` için eksik başlık
yaygın hatalardır.

## Bu Repoda Çalış

[1041 - Robot Bounded in Circle](../../../problems/1041-robot-bounded-in-circle/README.md), [874 - Walking Robot Simulation](../../../problems/0874-walking-robot-simulation/README.md) ve [649 - Dota2 Senate](../../../problems/0649-dota2-senate/README.md) giderek daha zengin state geçişleri kurar.

## Sistem Bağı

Protokol parser'ları, cihaz modları, motor kontrol komutları ve hata yönetimi açık
durum makineleridir. State ve olay tablosu net değilse test kapsamı da net olmaz.
