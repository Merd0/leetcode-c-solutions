#include <stdlib.h>

/*
 * LeetCode provides this struct.
 * It is written here so the solution file is understandable by itself.
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

static struct ListNode *new_node(int value)
{
    struct ListNode *node = malloc(sizeof(*node));

    if (node == NULL) {
        return NULL;
    }

    node->val = value;
    node->next = NULL;
    return node;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    /*
     * Digits are reversed, so we can add from head to tail.
     * carry stores values like normal manual addition.
     */
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

        tail->next = new_node(sum % 10);
        if (tail->next == NULL) {
            return dummy.next;
        }

        tail = tail->next;
        carry = sum / 10;
    }

    return dummy.next;
}
