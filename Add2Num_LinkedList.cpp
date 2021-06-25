#include <iostream>

struct ListNode{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int sum=0;
    ListNode *l3=NULL;
    ListNode **node=&l3;
    while(l1!=NULL||l2!=NULL||sum>0)
    {
        if(l1!=NULL)
        {
            sum+=l1->val;
            l1=l1->next;
            std::cout << sum;
        }
        std::cout << l1;
        if(l2!=NULL)
        {
            sum+=l2->val;
            l2=l2->next;
            std::cout << sum;
        }
        std::cout << l2;
        (*node)=new ListNode(sum%10);
        std::cout << sum;
        std::cout << node;
        sum/=10;
        node=&((*node)->next);
        std::cout << node;
    }        
    return l3;
    std::cout << l3;
}

int main() {
    int list1 = {2,4,3};
    int list2 = {5,6,4};
    ListNode list3;
    list3 = addTwoNumbers(list1, list2);
    return 0;
}