class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* slow = dummyHead;
        ListNode* fast = dummyHead;

        // Using logical AND to ensure not accessing a null pointer
        while (n-- > 0 && fast->next != nullptr) {
            fast = fast->next;
        }
        fast = fast->next;  // Move to the position before the node to be deleted

        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Safely remove the node
        ListNode* tmp = slow->next;
        if (tmp != nullptr) {
            slow->next = tmp->next;
            delete tmp;
        }

        ListNode* result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};
