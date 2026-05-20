# #0002 - Add Two Numbers

- Difficulty: Medium
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/add-two-numbers/
- Topics: Linked List, Math, Carry

## Question

TR: Ters sirada verilen iki linked list sayisini topla ve sonucu yine linked list olarak dondur.

EN: Add two numbers stored in reverse order as linked lists and return the sum as a linked list.

## Idea

TR: Iki listeyi ayni anda gez, her basamakta toplam ve `carry` degerini hesapla.

EN: Traverse both lists together and handle digit sum plus `carry`.

## Code

- [solution.c](solution.c)
