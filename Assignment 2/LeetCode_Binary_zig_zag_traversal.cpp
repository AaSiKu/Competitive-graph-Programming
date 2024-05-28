#include <bits/stdc++.h>
using namespace std; 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int layer  = 0;
        queue <TreeNode*> NextLayer;
        vector <vector<int>> result;
        if (root == NULL) return result;
        NextLayer.push(root);
        while (NextLayer.empty() !=1){
        int size = NextLayer.size();
        vector <int> temp;
        for (int x = 0;x<size;x++){
            vector <int>temp2;
            temp.push_back(NextLayer.front()->val);
            if (NextLayer.front()->left != NULL) NextLayer.push(NextLayer.front()->left);
            if (NextLayer.front()->right != NULL) NextLayer.push(NextLayer.front()->right);
            NextLayer.pop();
        }
        vector <int> result_temp;
        if (layer%2 ==1){
            for (int i = temp.size()-1;i>=0;i--){
                result_temp.push_back(temp[i]);
            }
        }
        else{
            result_temp = temp;
        }
        layer++;
        result.push_back(result_temp);
}
    return result;        
    }
};