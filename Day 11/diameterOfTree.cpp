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
    int length(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int left = length(root->left);
    int right = length(root->right);
    
    return max(left,right)+1;
    
}
int diameter(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int op1 = diameter(root -> left);
    int op2 = diameter(root -> right);
    int op3 = length(root -> left) +  length(root -> right);
   int nas = max(op1, max(op2,op3));
   return nas;

}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return false;
        }
        return diameter(root);
    }
};