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
    
    TreeNode*buildTreehelper(vector<int>inorder, vector<int>postorder, int ins, int ine, int posts, int poste){
        if(ins>ine)
            return NULL;
        int rootdata = postorder[poste];
        
         int rootindex = -1;
        for(int i =ins; i<=ine; i++ ){
            if(inorder[i] == rootdata){
                rootindex = i;
                break;
            }
        }
        
        int leftins = ins;
        int leftine = rootindex-1;
        int leftposts = posts;
        int leftposte = (leftine-leftins)+leftposts;
        
        int rightins = rootindex+1;
        int rightine = ine;
        int rightposts = leftposte+1;
        int rightposte = poste-1;
        
         TreeNode*root = new TreeNode(rootdata);
        root->left = buildTreehelper(inorder, postorder,leftins, leftine, leftposts, leftposte);
        root->right= buildTreehelper(inorder, postorder, rightins, rightine, rightposts, rightposte);
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
      return  buildTreehelper(inorder,postorder,0,n-1,0,n-1);
        
    }
};