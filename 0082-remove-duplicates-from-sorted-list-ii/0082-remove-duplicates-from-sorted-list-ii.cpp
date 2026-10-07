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
    void deleteVal(ListNode*& head, int value) {
        while (head != NULL && head->val == value) {
            head = head->next;
        }

        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == value) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
    }

    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int> mp;
        ListNode* temp = head;

        while (temp != NULL) {
            if (mp.find(temp->val) != mp.end()) {
                int value = temp->val;
                deleteVal(head, value);
            } else {
                mp[temp->val]++;
            }

            temp = temp->next;
        }

        return head;
    }
};