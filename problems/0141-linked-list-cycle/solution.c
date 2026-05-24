#include <stdbool.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool hasCycle(struct ListNode *head)
{
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;       /* 1 adim gider */
        fast = fast->next->next; /* 2 adim gider */

        if (slow == fast) {
            return true; /* cycle var */
        }
    }

    return false; /* fast NULL'a ulastiysa cycle yok */
}
