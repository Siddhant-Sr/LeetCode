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
//     int findElement(vector<int>& in, int element){
        
//         for(int i =0; i<in.size(); i++){
//             if(in[i]==element){
//                 return i;
//             }
//         }
//         return -1;
//     }
//     TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int index, int inorderStart, int inorderEnd, int n){
//         if(index>=n|| inorderStart>inorderEnd)
//             return NULL;
        
//         int element = preorder[index++];
//         TreeNode* root= new TreeNode(element);
//         int position = findElement(inorder, element);
        
        
//         root->left=solve(preorder, inorder, index, inorderStart, position-1,n);
//             root->right=solve(preorder, inorder, index, position+1, inorderEnd,n);
    
//     return root;
//     }

    
    
    // TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    //     int preOrderIndex = 0;
    //     int n = inorder.size();
    //     TreeNode* ans =  solve(preorder, inorder,preOrderIndex, 0, n-1,n);
    //     return ans;
    // }
    int preInd=0;
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    return createTree(preorder,inorder,0,inorder.size() - 1);
}
TreeNode* createTree(vector<int>& preorder, vector<int>& inorder,int start, int end){
    if(start > end){
        return NULL;
    }
    TreeNode* node=new TreeNode(preorder[preInd++]);
    int pos;
    for(int i=start;i<=end;i++){
        if(inorder[i]==node->val){
            pos=i;
            break;
        }
    }
    node->left =createTree(preorder, inorder,start,pos-1);
    node->right =createTree(preorder, inorder, pos+1,end);
    return node;
}
};