#include <iostream>
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
int product(TreeNode *root)
{
    if (root == NULL)
        return 1;
    int leftproduct = product(root->left);
    int rightproduct = product(root->right);
    int prod = root->val * leftproduct * rightproduct;
    return prod;
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
    TreeNode *a = new TreeNode(1);
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
    cout << product(a);
}
