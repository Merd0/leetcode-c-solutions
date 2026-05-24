#include <stdbool.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Helper function that reverses a linked list in-place.
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;

        prev = current;
        current = nextNode;
    }

    return prev;
}

bool isPalindrome(struct ListNode* head) {

    if (head == NULL || head->next == NULL) {
        return true;
    }

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    // 1) Find the middle.
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    /*
        If fast is not NULL, the list length is odd.
        Example: 1 -> 2 -> 3 -> 2 -> 1
                    slow is on 3.
        The middle value does not need to be compared.
    */
    if (fast != NULL) {
        slow = slow->next;
    }

    // 2) Reverse the second half.
    struct ListNode* secondHalf = reverseList(slow);

    // 3) Compare from the head and from the reversed second half.
    struct ListNode* firstHalf = head;

    while (secondHalf != NULL) {
        if (firstHalf->val != secondHalf->val) {
            return false;
        }

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}
