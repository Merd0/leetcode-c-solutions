/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* swapPairs(struct ListNode* head) {

    // Head can change, so use a dummy node.
    struct ListNode dummy;
    dummy.next = head;

    // prev always points to the node before the pair to swap.
    struct ListNode* prev = &dummy;

    while (prev->next != NULL && prev->next->next != NULL) {

        // First and second nodes of the current pair.
        struct ListNode* first = prev->next;
        struct ListNode* second = first->next;

        // Rewire links.
        prev->next = second;
        first->next = second->next;
        second->next = first;

        // Move to the next pair.
        prev = first;
    }

    return dummy.next;
}
