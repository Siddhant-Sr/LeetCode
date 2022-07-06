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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
//         map<int, map<int,vector<int>>> mp;
//         queue<pair<TreeNode*,pair<int,int>>> q; //hd, level
//          vector<vector<int>> ans;
//         q.push(make_pair(root,make_pair(0,0)));
//         while(!q.empty()){
//             pair<TreeNode*,pair<int,int>> temp = q.front();
//             q.pop();
//             TreeNode* element = temp.first;
//             int hd = temp.second.first;
//             int lvl = temp.second.second;
            
//             mp[hd][lvl].push_back(element->val);
            
//             if(root->left)
//                  q.push(make_pair(root->left,make_pair(hd-1,lvl+1)));
            
//             if(root->right)
//                  q.push(make_pair(root->right,make_pair(hd+1,lvl+1)));
            
//             sort(mp[hd][lvl].begin(),mp[hd][lvl].end());
            
                
            
//         }
//         for(auto e:mp){
//             vector<int> res;
//             for(auto i:e.second){
//                 for(auto j:i.second){
//                    res.push_back(j);
//                 }
//             } 
//             ans.push_back(res);
//         }
//         return ans;
        
         map<int,map<int,vector<int> > >mp;
        queue<pair<TreeNode *,pair<int,int> > >q;
        q.push(make_pair(root,make_pair(0,0)));
        vector<vector<int>>v;
        while(!q.empty()){
            int x = q.size();
            for(int i = 0;i<x;i++){
                 pair<TreeNode*, pair<int,int> > t  = q.front();
                q.pop();
                int hd = t.second.first;
                int lv = t.second.second;
                TreeNode *curr = t.first;
                mp[hd][lv].push_back(curr->val);
                if(curr->left){
                    q.push(make_pair(curr->left,make_pair(hd-1,lv+1)));
                }
                if(curr->right){
                    q.push(make_pair(curr->right,make_pair(hd+1,lv+1)));
                }
                sort(mp[hd][lv].begin(),mp[hd][lv].end());
            }
        }
        for(auto e:mp){
            vector<int> res;
            for(auto i:e.second){
                for(auto j:i.second){
                   res.push_back(j);
                }
            } 
            v.push_back(res);
        }
        return v;
    }
};