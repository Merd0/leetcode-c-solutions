# 25 - Stateful API, Tasarım ve Ownership

[Önceki](24-streams-and-iterators.md) | [İçindekiler](README.md) | [English](../en/25-stateful-apis-design-and-ownership.md) | [Sonraki](26-linked-list-rewiring.md)

## Zihinsel Model

Design sorularında çözüm tek fonksiyon değil, ömrü olan bir nesnedir. `create`
invariant'ı kurar, operasyonlar bu invariant'ı korur, `free` sahip olunan bütün
kaynakları tam bir kez bırakır.

Algoritma ile ownership ayrı konular değildir. Bir pointer'ın neyi gösterdiği kadar,
o belleği kimin ayırdığı ve kimin serbest bırakacağı da API doğruluğudur.

## Nesne Invariant'ı

```c
typedef struct {
    int *data;
    int size;
    int capacity;
} Object;
```

Geçerli nesnede `0 <= size <= capacity`, `data` kapasite kadar erişilebilir alanı
gösterir ve bu alanın sahibi nesnedir. Her public operasyon girişte bu koşullara
güvenir, çıkışta yeniden sağlar.

## Create ve Hata Yolu

Allocation adım adım yapılır. İkinci allocation başarısızsa birinci bırakılır ve
`NULL` döndürülür. Yarım kurulmuş nesne çağırana verilmez.

```c
Object *obj = malloc(sizeof(*obj));
if (obj == NULL) return NULL;
obj->data = malloc(capacity * sizeof(*obj->data));
if (obj->data == NULL) {
    free(obj);
    return NULL;
}
```

## Interactive API

Guess Number gibi API'lerde dış fonksiyon bilgi sağlar fakat state'in sahibi değildir.
Çağrı sayısı ve dönüş değerlerinin semantiği algoritmanın parçasıdır. Mock kullanarak
bağımsız test edilebilir bir sınır oluşturmak değerlidir.

## Ne Zaman Basitleştirilmeli?

Tek çağrılık problem için nesne katmanı gereksiz olabilir. Buna karşılık çağrılar
arası state gerekiyorsa global değişken kolay görünse de yeniden giriş, çoklu nesne
ve test izolasyonunu bozar.

## C Riskleri

Shallow copy, double free, dangling pointer, kapasite ile eleman sayısını karıştırma
ve `sizeof(pointer)` kadar allocation yapma temel risklerdir.

## Bu Repoda Çalış

[155 - Min Stack](../../../problems/0155-min-stack/README.md), [622 - Design Circular Queue](../../../problems/0622-design-circular-queue/README.md), [1381 - Design a Stack With Increment Operation](../../../problems/1381-design-a-stack-with-increment-operation/README.md) ve [1472 - Design Browser History](../../../problems/1472-design-browser-history/README.md).

## Sistem Bağı

Sürücü context'i, periferik handle'ı ve haberleşme oturumu aynı create/use/destroy
ömrüne sahiptir. Kaynak sahipliği API başlığında anlaşılır olmalıdır.

