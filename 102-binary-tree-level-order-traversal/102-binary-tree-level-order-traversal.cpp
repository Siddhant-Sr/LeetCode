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
    vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> v;
//         vector<int> temp;
//         if(root==NULL)
//             return v;
        
//         queue<TreeNode*> q;
//         q.push(root);
//         q.push(NULL);
//         while(!q.empty()){
            
//             TreeNode* node = q.front();
            
//             temp.push_back(node->val);
//             q.pop();
            
//             if(node->left)
//                 q.push(node->left);
            
//             if(root->right)
//                 q.push(node->right);
            
//             q.push(NULL);
            
//             if(q.front() == NULL){
//             v.push_back(temp);
//                 q.pop();
//                 temp.clear();
//             }
//         }
//         return v;
        if(root==NULL)
               return {};
           vector<vector<int>> ans; 
            queue<TreeNode*> q;
            q.push(root);
            TreeNode *temp;
            int len;
            while(!q.empty()){
               len=q.size();
		       vector<int> v;
               for(int i=0;i<len;i++){
                    temp=q.front();
                    q.pop();
                    v.push_back(temp->val);

                   if(temp->left) q.push(temp->left);
                   if(temp->right) q.push(temp->right);
                }
		        ans.push_back(v);
            }
          return ans;
    }
};