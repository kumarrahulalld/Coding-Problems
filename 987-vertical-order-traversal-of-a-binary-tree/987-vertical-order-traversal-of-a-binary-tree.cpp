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
    int maxRow=0,maxCol=0,minCol=INT_MAX;
    map<pair<int,int>,vector<int>>mp;
    void verticalTraversal(TreeNode* root,int row,int col)
    {
        if(root==NULL)
            return;
        //cout<<row<<" "<<col<<" "<<root->val<<endl;
        maxRow=max(maxRow,row);
        maxCol=max(maxCol,col);
        minCol=min(minCol,col);
        mp[make_pair(row,col)].push_back(root->val);
        verticalTraversal(root->right,row+1,col+1);
        verticalTraversal(root->left,row+1,col-1);
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        mp.clear();
        maxCol=0;
        maxRow=0;
        minCol=INT_MAX;
        vector<vector<int>>result;
        verticalTraversal(root,0,0);
        for(int j=minCol;j<=maxCol;j++)
        {
            vector<int> colResult;
            for(int i=0;i<=maxRow;i++)
            {
                if(mp.find(make_pair(i,j))!=mp.end())
                {
                    //cout<<i<<" "<<j<<endl;
                    vector<int> rowColResult=mp[make_pair(i,j)];
                    sort(rowColResult.begin(),rowColResult.end());
                    for(int val:rowColResult)
                        colResult.push_back(val);
                }
            }
            result.push_back(colResult);
        }
        return result;
    }
};