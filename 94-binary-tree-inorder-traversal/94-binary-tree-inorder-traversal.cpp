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
        morrisin(root);
        return v;
    }
    void morrisin(TreeNode* r)
    {
        while(r){
        if(r->left==NULL)
        {
            v.push_back(r->val);
            r=r->right;
        }else
        {
            TreeNode* curr=r->left;
            while(curr->right && curr->right!=r)
            {
                curr=curr->right;
            }
            if(curr->right!=NULL)
            { 
                curr->right=NULL;
                v.push_back(r->val);
                r=r->right;
            }
            else{
                curr->right=r;
                // curr->right=NULL;
                r=r->left; 
            }
        }
    }
    }
};