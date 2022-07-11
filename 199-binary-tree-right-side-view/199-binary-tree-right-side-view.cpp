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
    
  void help(TreeNode* root,int lvl,vector<int>& ans)
  {
    if(root==NULL) return ;
    if(lvl==ans.size()) ans.push_back(root->val);
    help(root->right,lvl+1,ans);
     help(root->left,lvl+1,ans);
  }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
      help(root,0,ans);
      return ans;
    
    }
};

