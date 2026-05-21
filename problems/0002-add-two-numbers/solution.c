#include <stdlib.h>

/*
 * LeetCode provides this struct.
 * It is written here so the solution file is understandable by itself.
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode dummy = {0, NULL};
    struct ListNode *tail = &dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        /* Create one result digit and move carry to the next loop. */
        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;

        tail->next = node;
        tail = tail->next;

        carry = sum / 10;
    }

    return dummy.next;
}
