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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            int val;
            for(int i=0;i<size;i++)
            {
                TreeNode* fore=q.front();
                q.pop();
                
                if(fore->left)q.push(fore->left);
                if(fore->right)q.push(fore->right);
                val=fore->val;
            }
            ans.push_back(val);
        }
        return ans;
    }
};