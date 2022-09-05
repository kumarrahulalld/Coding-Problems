/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
   
    vector<vector<int>> levelOrder(Node* root) {
     vector<vector<int>> result;
     queue<Node*> q;
     if(root)
     {
         q.push(root);
         while(!q.empty())
         {
             int qsize=q.size();
             vector<int> levelResult;
             for(int i=0;i<qsize;i++)
             {
                Node* currentNode=q.front();
                levelResult.push_back(currentNode->val);
                for(Node* node:currentNode->children)
                {
                    if(node)
                        q.push(node);
                }
                 q.pop();
             }
             result.push_back(levelResult);
         }
     }
        return result;
    }
};