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
//     vector<int> traverse(queue<TreeNode*>q){
//         vector<int> level;
//             while(!q.empty()){
                
//             }
//             TreeNode* left = q.front()->left;   q.push(left);
//             TreeNode* right = q.front()->right; q.push(right);
//             int element = q.front()->val;
//             ans.push_back(element);
//             q.pop();
//     }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if( !root) { return{};}
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        vector<int> Lresult;
        int cnt = 1;
        
        while(!q.empty()){
            if(q.front()->left)  { q.push(q.front()->left); };
            if(q.front()->right) { q.push(q.front()->right); };
            Lresult.push_back(q.front()->val);
            q.pop();
            
            if(--cnt == 0){
                ans.push_back(Lresult); 
                Lresult.clear();
                cnt = q.size();
            }
            
        }
        return ans;
    }
};