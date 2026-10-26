/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> mp;

        for (int i = 0; temp != NULL; i++) {
            if (mp.find(temp) != mp.end()) {
                return temp;
            } else {
                mp[temp] = i;
            }
            temp = temp->next;
        }

        return NULL;
    }
};
