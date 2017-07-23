//==============================================================================
// 103. Binary Tree Zigzag Level Order Traversal
// C++
// Tag: Tree(BFS)
//==============================================================================
// Summary:
// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/#/description

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode *> nodes;
        bool flag = true;
        
        if (!root) {
            return res;
        }

        nodes.push(root);

        while (!nodes.empty()) {
            int level = nodes.size();
            vector<int> tmp(level);
            for (int i = 0; i < level; ++i) {
                int index = (flag) ? i:(level - 1 - i);
                if (nodes.front()->left) {
                    nodes.push(nodes.front()->left);
                }
                if (nodes.front()->right) {
                    nodes.push(nodes.front()->right);
                }
                tmp[index] = nodes.front()->val;
                nodes.pop();
            }
            flag = !flag;
            res.push_back(tmp);
        }
    
        return res;
    }
};
