/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* newHead = head->next;

        ListNode* p1 = head;
        ListNode* p2 = NULL;
        ListNode* prev = NULL;

        while (p1 != NULL && p1->next != NULL) {
            p2 = p1->next->next;

            ListNode* second = p1->next;

            second->next = p1;
            p1->next = p2;

            if (prev != NULL)
                prev->next = second;

            prev = p1;
            p1 = p2;
        }

        return newHead;
    }
};