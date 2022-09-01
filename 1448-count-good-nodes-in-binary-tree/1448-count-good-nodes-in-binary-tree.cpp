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
    int find(TreeNode* root,int maxValue)
    {
        if(root==NULL)
            return 0;
        return (root->val >= maxValue)+find(root->left,max(root->val,maxValue))+find(root->right,max(root->val,maxValue));
    }
    int goodNodes(TreeNode* root) {
        return find(root,INT_MIN);
    }
};