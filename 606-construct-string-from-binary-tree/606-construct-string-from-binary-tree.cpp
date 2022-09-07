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
    string str;
    void stringFromTree(TreeNode* node)
    {
        if(!node) return;
        str+=to_string(node->val);
        if(!node->left and node->right){
            str+="(";
            str+=")";
        }  
        if(node->left){
            str+='(';
            stringFromTree(node->left);
            str+=')';
        }
        if(node->right){
            str+='(';
            stringFromTree(node->right);
            str+=')';
        }  
    }
    string tree2str(TreeNode* root) {
        stringFromTree(root);
        return str;
    }
};