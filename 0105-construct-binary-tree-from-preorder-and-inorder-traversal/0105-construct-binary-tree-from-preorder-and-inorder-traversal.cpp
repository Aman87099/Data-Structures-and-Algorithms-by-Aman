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
    
    TreeNode*buildTreehelper(vector<int>preorder, vector<int>inorder, int ins, int ine, int pres, int pree){
        if(ins>ine){
            return NULL;
        }
        int rootdata = preorder[pres];
        
        int rootindex = -1;
        for(int i =ins; i<=ine; i++ ){
            if(inorder[i] == rootdata){
                rootindex = i;
                break;
            }
        }
        
        int leftins = ins;
        int leftine = rootindex-1;
        int leftpres = pres+1;
        int leftpree = leftine-leftins+leftpres;
        
        int rightins = rootindex+1;
        int rightine = ine;
        int rightpres = leftpree+1;
        int rightpree = pree;
        
        TreeNode*root = new TreeNode(rootdata);
        root->left = buildTreehelper(preorder, inorder,leftins, leftine, leftpres, leftpree);
        root->right= buildTreehelper(preorder, inorder, rightins, rightine, rightpres, rightpree);
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
      return  buildTreehelper(preorder, inorder, 0, n-1,0,n-1);
        
        
        
    }
};