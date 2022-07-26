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
    int c=0;
    void inorder(TreeNode *root,int &x,int k)
    {  if(root==NULL)
        return ;
        inorder(root->left,x,k);
        c++;
        if(c==k)
         x=root->val;
     inorder(root->right,x,k);
        
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int x;
        inorder(root,x,k);
        return x;
    }
};