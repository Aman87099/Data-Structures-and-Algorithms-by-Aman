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
    
    pair<int,int>heightdiameter(TreeNode*root){
        if(root == NULL){
            pair<int,int>p;
            p.first = 0;
            p.second = 0;
            return p;
        }
        pair<int,int>leftans = heightdiameter(root->left);
        pair<int, int>rightans = heightdiameter(root->right);
        
        int lh = leftans.first;
        int ld = leftans.second;
        
        int rh = rightans.first;
        int rd = rightans.second;
        
        int height = 1+max(lh, rh);
        int diameter = max(lh+rh, max(ld,rd));
        pair<int,int>p;
        p.first = height;
        p.second = diameter;
        return p;
        
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int>p = heightdiameter(root);
        return p.second;
        
    }
};