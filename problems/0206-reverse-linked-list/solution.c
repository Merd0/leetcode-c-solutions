/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next; /* once sonrakini kaybetmemek icin sakla */

        current->next = prev; /* yonu ters cevir */

        prev = current;
        current = nextNode;
    }

    return prev;
}
