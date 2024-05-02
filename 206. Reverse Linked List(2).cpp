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
    ListNode* reverse(ListNode* prev, ListNode* cur) {
        if (cur == NULL) {
            return prev;
        }
        ListNode* tmp = cur->next;
        cur->next = prev;
        return reverse(cur, tmp);
    }
    ListNode* reverseList(ListNode* head) { return reverse(NULL, head); }
};