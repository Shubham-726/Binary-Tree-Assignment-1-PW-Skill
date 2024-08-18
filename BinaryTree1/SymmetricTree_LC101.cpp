class Solution {
public:

    bool isSame(TreeNode* p , TreeNode* q){
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return isSame(p->left,q->left) && isSame(p->right,q->right);
    }
    void invertTree(TreeNode* root){
        if(root == NULL) return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        invertTree(root->left);
        invertTree(root->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        invertTree(root->left);
        return isSame(root->left , root->right);
    }
};