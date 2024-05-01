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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* cur = dummyhead;
        while (cur->next != nullptr)
        {
            if (cur->next->val == val)
            {
                ListNode * temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }
            else
            {
                cur = cur->next;
            }
        }
        head = dummyhead->next;
        delete dummyhead;
        return head;
    }
};