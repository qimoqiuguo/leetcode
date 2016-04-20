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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<const TreeNode *> s;
        const TreeNode* p = root;
        while(!s.empty() || p!=NULL){
            if(p != NULL){
                s.push(p);
                p = p ->left;
            }
            else{
                p = s.top();
                s.pop();
                result.push_back(p -> val);
                p = p->right;
            }
        }
        return result;
    }
};