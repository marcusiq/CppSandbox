class LinkedListTesting
{
    public:
    
    struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    // Constructor
    LinkedListTesting();

    // Destructor
    ~LinkedListTesting();

    ListNode* rotateRight(ListNode* head, int k);

    ListNode* reverseBetween(ListNode* head, int m, int n);

    void printLinkedList(ListNode* head);
};