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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode ans(0);
        ListNode* address = &ans;

        while (list1 != NULL && list2 != NULL) {
            ListNode* temp = nullptr;
            if (list1->val <= list2->val) {
                address->next = list1;
                list1 = list1->next;
            } else {
                address->next = list2;
                list2 = list2->next;
            }
            address = address->next;
        }
        if (list1) {
            address->next = list1;
        }
        if (list2) {
            address->next = list2;
        }

        return ans.next;
    }
};