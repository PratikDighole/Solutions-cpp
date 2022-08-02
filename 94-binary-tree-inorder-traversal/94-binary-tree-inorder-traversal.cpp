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
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) { 
        inor(root);
        return v;
    }
    void inor(TreeNode* r)
    {
        if ( r == NULL) return;

        inorderTraversal(r->left);
        v.push_back(r->val);
        inorderTraversal(r->right);
    }
    
};