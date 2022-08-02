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
    void levelt(TreeNode* curr,map<int,vector<int>> &m,int lvl)
    {
        if(curr==NULL)return;
        m[lvl].push_back(curr->val);
        levelt(curr->left,m,lvl+1);
        levelt(curr->right,m,lvl+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==NULL)return v;
        map<int,vector<int>> mp;
        levelt(root,mp,0);
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        return v;
    }
};