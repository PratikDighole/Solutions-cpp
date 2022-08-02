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
    void prior(TreeNode* r)
    {
        if(r==NULL)return;
        v.push_back(r->val);
        prior(r->left);
        prior(r->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        prior(root);
        return v;
    }
};