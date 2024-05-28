#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int p_val = p->val;
        int q_val = q->val;
        while (root!=NULL){
        if ( p_val < root->val && q_val < root->val) root = root->left;
        else if ( p_val > root->val && q_val > root->val) root = root->right;
        else return root;
}
        return root;
    }
};