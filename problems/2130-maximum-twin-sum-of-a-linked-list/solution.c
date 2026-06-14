#include <stddef.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode* prev = NULL;
    struct ListNode* curr = slow;

    while (curr != NULL) {
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    int maxTotal = 0;

    struct ListNode* first = head;
    struct ListNode* second = prev;

    while (second != NULL) {
        int sum = first->val + second->val;

        if (sum > maxTotal) {
            maxTotal = sum;
        }

        first = first->next;
        second = second->next;
    }

    return maxTotal;
}
