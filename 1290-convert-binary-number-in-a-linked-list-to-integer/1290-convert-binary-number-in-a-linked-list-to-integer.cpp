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
    int getDecimalValue(ListNode* head) {
        if (head == NULL)
            return 0;
        if (head->next == NULL)
            return head->val;
        int length = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        temp = head;
        int ans = 0;
        while (temp != NULL) {
            ans = ans + temp->val * (pow(2, length-1));
            length--;
            temp=temp->next;
        }
        return ans;
    }
};