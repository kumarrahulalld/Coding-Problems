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
    vector<vector<int>> result;
    void trav(TreeNode* root,int target,vector<int> &path)
    {
        if(root==NULL)
            return;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==target)
            result.push_back(path);
        if(root->left)
        trav(root->left,target-root->val,path);
        if(root->right)
            trav(root->right,target-root->val,path);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        result.clear();
        vector<int> temp;
        trav(root,targetSum,temp);
        return result;
    }
};