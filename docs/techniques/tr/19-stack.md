# 19 - Stack

[Önceki](18-intervals.md) | [İçindekiler](README.md) | [English](../en/19-stack.md) | [Sonraki](20-monotonic-stack.md)

## Zihinsel Model

Stack son giren elemanın ilk çıktığı LIFO yapısıdır. Bir iş başka bir işin içinde
açılıyor ve en son açılan önce kapanıyorsa doğal model stack'tir: parantezler,
fonksiyon çağrıları, path parçaları, expression operand'ları ve geri alma işlemleri.

Stack yalnız veri saklamaz; henüz tamamlanmamış işlerin sırasını temsil eder.

## Invariant

Tarama sırasında stack, işlenmiş prefix'te açılmış ama henüz eşleşmemiş öğeleri
doğru sırada tutar. Kapanış geldiğinde yalnız tepedeki öğeyle eşleşebilir.

```c
int top = 0;
for (int i = 0; s[i] != '\0'; i++) {
    if (is_open(s[i])) {
        stack[top++] = s[i];
    } else {
        if (top == 0 || !matches(stack[top - 1], s[i])) return false;
        top--;
    }
}
return top == 0;
```

`top` burada eleman sayısı ve bir sonraki boş konumdur. Tepe `top - 1`'dedir.

## Array ile Stack

Maksimum kapasite biliniyorsa C dizisi ve `top` en sade çözümdür. Dinamik stack
kapasite büyütme ister. Linked list her push için allocation gerektirdiğinden gerçek
zaman davranışında daha az öngörülebilir olabilir.

## Ne Zaman Kullanılmaz?

En eski öğe önce işlenecekse queue gerekir. "Sonraki daha büyük" gibi aday eleme
sorularında sıradan stack değil monotonic stack invariant'ı kurulmalıdır.

## Maliyet ve C Riskleri

Push/pop O(1)'dir. Underflow, kapasite aşımı, `top` tanımını karıştırma ve stack'ten
pointer döndürürken nesne ömrünü ihlal etme yaygın hatalardır.

## Bu Repoda Çalış

[20 - Valid Parentheses](../../../problems/0020-valid-parentheses/README.md), [71 - Simplify Path](../../../problems/0071-simplify-path/README.md), [150 - Evaluate Reverse Polish Notation](../../../problems/0150-evaluate-reverse-polish-notation/README.md) ve [946 - Validate Stack Sequences](../../../problems/0946-validate-stack-sequences/README.md).

## Sistem Bağı

İç içe paket alanları, parser context'i ve bounded undo geçmişi sabit kapasiteli
stack ile modellenebilir. Kapasite sınırı API'nin açık parçası olmalıdır.

