#include <iostream>
#include <climits>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
int minValue(TreeNode *root)
{
    if (root == NULL)
        return INT_MAX;
    int leftmin = minValue(root->left);
    int rightmin = minValue(root->right);
    int minVal = min(root->val, min(leftmin, rightmin));
    return minVal;
}
void display(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
int main()
{
    TreeNode *a = new TreeNode(9);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout << endl;
    cout << minValue
    (a);
}
