class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int val) : val(val), next(nullptr) {}
    };
    MyLinkedList() {
        _dummyHead = new LinkedNode(0);
        _size = 0;
    }

    int get(int index) {
        if (index > (_size - 1) || index < 0) {
            return -1;
        }
        LinkedNode* cur = _dummyHead->next;
        while (index != 0) {
            cur = cur->next;
            index--;
        }
        return cur->val;
    }

    void addAtHead(int val) {
        LinkedNode* newnode = new LinkedNode(val);
        newnode->next = _dummyHead->next;
        _dummyHead->next = newnode;
        _size++;
    }

    void addAtTail(int val) {
        LinkedNode* newnode = new LinkedNode(val);
        LinkedNode* cur = _dummyHead;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newnode;
        _size++;
    }

    void addAtIndex(int index, int val) {
        if (index > _size)
            return;
        if (index < 0)
            index = 0;
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }

    void deleteAtIndex(int index) {
        if (index >= _size || index < 0) {
            return;
        }
        LinkedNode* cur = _dummyHead;
        while (index--) {
            cur = cur->next;
        }
        LinkedNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp = nullptr;
        _size--;
    }

private:
    int _size;
    LinkedNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */