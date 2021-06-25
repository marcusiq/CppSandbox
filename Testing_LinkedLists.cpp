#include <iostream>
#include "LinkedListTesting.h"

LinkedListTesting *L1Obj = new LinkedListTesting();
int main(){
    LinkedListTesting::ListNode* a = new LinkedListTesting::ListNode(5);
    LinkedListTesting::ListNode* b = new LinkedListTesting::ListNode(4,a);
    LinkedListTesting::ListNode* c = new LinkedListTesting::ListNode(3,b);
    LinkedListTesting::ListNode* d = new LinkedListTesting::ListNode(2,c);
    LinkedListTesting::ListNode* e = new LinkedListTesting::ListNode(1,d);
    LinkedListTesting::ListNode* f = new LinkedListTesting::ListNode(6,e);
    // printLinkedList(f);
    // std::cout << '\n';
    // ListNode* newvar = rotateRight(f,2);
    // printLinkedList(newvar);

    L1Obj->reverseBetween(f,3,5);
    delete L1Obj;
}