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
    vector<int>result;
    void Traverse(TreeNode* root)
    {
        if(root==NULL)
            return;
        Traverse(root->left);
        result.push_back(root->val);
        Traverse(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        result.clear();
        Traverse(root);
        return result;
    }
};