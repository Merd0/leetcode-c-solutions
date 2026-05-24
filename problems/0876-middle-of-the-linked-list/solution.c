/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *middleNode(struct ListNode *head)
{
    struct ListNode *count = head;
    int cnt = 0;

    /* Once node sayisini bul */
    while (count != NULL) {
        count = count->next;
        cnt++;
    }

    /* Ortaya kadar ilerle */
    int middle = cnt / 2;

    struct ListNode *current = head;

    while (middle > 0) {
        current = current->next;
        middle--;
    }

    return current;
}
