/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool pTree(TreeNode* root)
    {
        if(root==NULL)
            return false;
        bool leftTree=pTree(root->left);
        bool rightTree=pTree(root->right);
        if(!leftTree)
            root->left=NULL;
        if(!rightTree)
            root->right=NULL;
        return leftTree||rightTree||root->val==1;
    }
    TreeNode* pruneTree(TreeNode* root) {
        pTree(root);
        if(root->left==NULL && root->right==NULL && root->val==0)
            return NULL;
        return root;
    }
};