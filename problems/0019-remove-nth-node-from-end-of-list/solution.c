/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    int count = 0;
    struct ListNode* temp = head;

    // 1) Count total nodes.
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Dummy handles the case where the deleted node is head.
    struct ListNode dummy;
    dummy.next = head;

    // Move to the node before the target.
    int beforeIndex = count - n;

    struct ListNode* current = &dummy;

    for (int i = 0; i < beforeIndex; i++) {
        current = current->next;
    }

    // current->next is the node to remove.
    current->next = current->next->next;

    return dummy.next;
}
