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

    void count(TreeNode* node, int &c, int max_v){
        if(!node) return;
        
        if(node->val >= max_v){
            c++;
            max_v = node->val;
        }
        cout<<node->val<<":"<<c<<" ";

        count(node->left,c,max_v);
        count(node->right,c,max_v);
        return;
    }

    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int c=0;
        count(root,c,-101);
        return c;
    }
};
