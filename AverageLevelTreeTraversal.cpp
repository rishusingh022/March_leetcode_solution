  
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<TreeNode*> nodes = {root};
        vector<double> result;
        while(true) {
            long row_sum = 0;
            int row_count = 0;
            vector<TreeNode*> new_nodes;
            
            for(auto node : nodes) {
                if(!node) continue;
                row_sum += node->val;
                row_count += 1;
                new_nodes.push_back(node->left);
                new_nodes.push_back(node->right);
            }
                
            if(row_count == 0) break;
            result.push_back((double)row_sum / row_count);
            nodes = new_nodes;
        }
            
        return result;
    }
};