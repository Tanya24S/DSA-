int diameter(TreeNode* root, int &ans){
    if(root==NULL) return 0;
    int lh=diameter(root->left, ans);
    int rh=diameter(root->right, ans);
    ans=max(ans, lh+rh);
    return max(lh, rh)+1;
 }
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        diameter(root, ans);
        return ans;
    }
};
