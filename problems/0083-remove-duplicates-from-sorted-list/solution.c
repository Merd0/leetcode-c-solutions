/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* current = head;

    while (current != NULL && current->next != NULL) {

        if (current->val == current->next->val) {
            // Same value: skip the next node.
            current->next = current->next->next;
        }
        else {
            // Different value: move forward.
            current = current->next;
        }
    }

    return head;
}
