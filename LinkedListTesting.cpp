#include <iostream>
#include "LinkedListTesting.h"

    LinkedListTesting::LinkedListTesting(){}

    LinkedListTesting::~LinkedListTesting(){}

    LinkedListTesting::ListNode* LinkedListTesting::rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int len = 0;
        ListNode *p = head;
        while(p->next) { len++; p = p->next; }
        std::cout << len << '\n';
        p->next = head;
        std::cout << p->next->val << '\n';
        if(k %= len)
            for(int i = 0; i < len-k; ++i, p=p->next) ; 
        ListNode* newHead = p->next;
        p->next = NULL;
        return newHead;
    }

    LinkedListTesting::ListNode* LinkedListTesting::reverseBetween(ListNode* head, int m, int n) {
        ListNode newHead(0);
        newHead.next = head;
        ListNode *pre = &newHead, *cur = head, *next = NULL;
        printLinkedList(pre);
        int i = 1;
        while(i < n) {
            if(i++ < m) { pre = cur; cur = cur->next; }
            else { 
                printLinkedList(cur);
                printLinkedList(pre);
                next = cur->next; 
                cur->next = cur->next->next; 
                next->next = pre->next; 
                pre->next = next; 
                printLinkedList(cur);
            }
            printLinkedList(newHead.next);
        }
        printLinkedList(newHead.next);
        return newHead.next;
    }

    void LinkedListTesting::printLinkedList(ListNode* head)
    {
        while(head)
        {
            std::cout << head->val;
            head = head->next;
        }
        std::cout << '\n';
    }