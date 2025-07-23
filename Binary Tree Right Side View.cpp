/*
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
Example 1:
Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]
Example 2:
Input: root = [1,2,3,4,null,null,null,5]
Output: [1,3,4,5]
Example 3:
Input: root = [1,null,3]
Output: [1,3]
Example 4:
Input: root = []
Output: []
Code :-
*/
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return {};
        }
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            TreeNode * node = NULL;
            while(size--){
                node = q.front();
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            ans.push_back(node->val);
        }
        return ans;
    }
};
