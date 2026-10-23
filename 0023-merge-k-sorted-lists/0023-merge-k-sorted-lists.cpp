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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (true) {
            int minval = INT_MAX;
            int index = -1;

            for (int i = 0; i < n; i++) {
                if (lists[i] != nullptr && lists[i]->val < minval) {
                    minval = lists[i]->val;
                    index = i;
                }
            }
            if (index == -1)
                break;

            tail->next = lists[index];
            tail = tail->next;

            lists[index] = lists[index]->next;
        }

        return dummy.next;
    }
};