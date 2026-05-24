/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    /*
     * dummy sahte baslangic node'u
     * Asil sonuc dummy.next'ten baslayacak
     */
    struct ListNode dummy;
    dummy.next = NULL;

    /* tail her zaman sonuc listesinin sonunu gosterir */
    struct ListNode *tail = &dummy;

    /* Iki listede de eleman oldugu surece karsilastir */
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    /* Listelerden biri bittiyse, kalan listeyi direkt sona bagla */
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}
