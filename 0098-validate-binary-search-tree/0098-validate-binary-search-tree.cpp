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
    
    bool isValidBSThelper(TreeNode*root, long long minV = -10000000000, long long maxV = 10000000000){
        if(root == NULL)
            return true;
        
        bool left = isValidBSThelper(root->left,minV, root->val);
        bool right= isValidBSThelper(root->right, root->val, maxV);
        
        if(left && right && root->val>minV && root->val<maxV) return true;
        else return false;
           
         }
    
    bool isValidBST(TreeNode* root) {
        return isValidBSThelper(root);
        
    }
};