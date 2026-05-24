/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode dummy;
    dummy.next = head;

    struct ListNode* prev = &dummy;
    struct ListNode* current = head;

    while (current != NULL) {

        // If current starts a duplicate group.
        if (current->next != NULL && current->val == current->next->val) {

            int duplicateValue = current->val;

            // Skip every node with the same duplicate value.
            while (current != NULL && current->val == duplicateValue) {
                current = current->next;
            }

            // Link prev to the node after the duplicate group.
            prev->next = current;
        }
        else {
            // This node is unique, so keep it.
            prev = current;
            current = current->next;
        }
    }

    return dummy.next;
}
