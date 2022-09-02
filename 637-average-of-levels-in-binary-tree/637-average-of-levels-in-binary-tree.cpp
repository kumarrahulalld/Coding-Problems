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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if(root)
        {
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                int sz=q.size();
                double sm=0;
                for(int i=0;i<sz;i++)
                {
                    TreeNode* frnt=q.front();
                    sm+=frnt->val;
                    if(frnt->left)
                        q.push(frnt->left);
                    if(frnt->right)
                        q.push(frnt->right);
                    q.pop();
                }
                result.push_back(sm/sz);
            }
        }
        return result;
    }
};