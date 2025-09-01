//Trees are like family trees, another real life example would be drop down menu on websites, that requires tree structure
//Terms: root (top most given node), levels (basically how many generations are there etc), sibings (child nodes from same parent), parent nodes
    // leaf nodes (last noeds with no child nodes), LCA (Lowest common ancestor)
//Types of trees: 1. Binary trees (every node can have 0-2 nodes), 2. Teranary trees (every node can have 0-3 nodes), 3. N-aray trees (every nodes can have 0-n nodes)

//Skewed Binary trees
//1. Left skewed   2. Right skewed
//Complete Binary trees

//Implementation of a binary tree

//Three types of traversals: 1. Preorder traversal 2. Postorder 3. Inorder
//Preorder traversal code(leetcode 144):
class Solution {
public:
    void rec(TreeNode* root, vector<int> &result){
        if(root==NULL) return;
        result.push_back(root->val);
        rec(root->left,result);
        rec(root->right, result);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        rec(root, result);
        return result;
    }
};
//Inorder traversal(leetcode 94):
class Solution {
public:
    void rec(TreeNode* root, vector<int> &result){
        if(root==NULL) return;
        rec(root->left, result);
        result.push_back(root->val);
        rec(root->right, result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        rec(root, result);
        return result;
    }
};
//Post order traversal(leetcode 145):
class Solution {
public:
    void rec(TreeNode* root,vector<int> &result){
        if(root==NULL) return;
        rec(root->left, result);
        rec(root->right, result);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        rec(root, result);
        return result;
    }
};
