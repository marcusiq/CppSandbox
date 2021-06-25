#include <vector>
#include <iostream>
#include <algorithm> 

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool contains(const TreeNode& n, const int v)
{
    std::cout << "\nBinTree value in contains:" << n.val;
    cout << "\ncomplement in contains:" << v;
    if(n.val == v) 
    {
        cout << "\n These are the values in contains: " << n.val;
        return true;
    }
    if(n.val < v){
        if(n.left)  return contains(*n.left, v);
    } else {
        if(n.right) return contains(*n.right, v);
    }
    return false;
}

bool walk(const TreeNode& n, const TreeNode& tree2, const int t)
{
    {
        const int complement = t - n.val;
        cout << "\nTree1 value in walk:" << n.val;
        cout << "\nTree2 value in walk:" << tree2.val;
        cout << "\ncomplement in walk:" << complement;
        if(contains(tree2, complement)){
        cout << "\n These are the values n.val: " << n.val;
        cout << "\n These are the values tree2.val: " << tree2.val;
        return true;
        }
    }
    if(n.left  && walk(*n.left,  tree2, t)){
        cout << "\n These are the values *n.left.val: " << n.left->val;
        cout << "\n These are the values tree2.val: " << tree2.val;
        return true;
    }
    if(n.right && walk(*n.right, tree2, t)){
        cout << "\n These are the values *n.right.val: " << n.right->val;
        cout << "\n These are the values tree2.val: " << tree2.val;
        return true;
    }
    return false;
}

// Algorithm 1:
bool twoSumBSTs(const TreeNode* root1, const TreeNode* root2, const int target)
{
    if(!root1 || !root2) return false;   
    return walk(*root1, *root2, target);    
}

int main(){
    TreeNode* lastLeft = new TreeNode(4);
    TreeNode* lastRight = new TreeNode(4);
    TreeNode* secondLeft = new TreeNode(4, lastLeft, lastRight);
    TreeNode* secondRight = new TreeNode(2);
    const TreeNode* Left = new TreeNode(1,secondLeft, secondRight);
    TreeNode* lastLeft2 = new TreeNode(5);
    TreeNode* lastRight2 = new TreeNode(2);
    TreeNode* secondRight2 = new TreeNode(2, lastLeft2, lastRight2);
    TreeNode* secondLeft2 = new TreeNode(5);
    const TreeNode* Right2 = new TreeNode(2, secondLeft2, secondRight2);

    bool res = twoSumBSTs(Left, Right2, 5);

    cout << "this is the result of the sum BST:    " << res;

}