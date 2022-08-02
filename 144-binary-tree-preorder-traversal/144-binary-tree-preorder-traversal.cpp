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
    // void prior(TreeNode* r)
    // {
    //     if(r==NULL)return;
    //     v.push_back(r->val);
    //     prior(r->left);
    //     prior(r->right);
    // }
    vector<int> preorderTraversal(TreeNode* root) {
        prior(root);
        return v;
    }
    void prior(TreeNode* r)
    {
        while(r)
        {
            
            if(r->left==NULL)
            {
                v.push_back(r->val);
                r=r->right;
            }
            else
            {
                TreeNode* curr=r->left;
                while(curr->right && curr->right!=r)
                {
                    curr=curr->right;
                }
                if(curr->right!=NULL)
                {
                    curr->right=NULL;
                    r=r->right;
                    
                }
                else{
                    curr->right=r;
                    v.push_back(r->val);
                    r=r->left;
                }
            }
        }
    }
};