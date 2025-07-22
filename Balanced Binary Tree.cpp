/*
Given a binary tree, determine if it is height-balanced.
Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:
Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:
Input: root = []
Output: true
Code :-
*/
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }
    int dfsHeight(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        int lefth = dfsHeight(root->left);
        if(lefth == -1) return -1;
        int righth = dfsHeight(root->right);
        if(righth == -1) return -1;
        if(abs(lefth-righth)>1) return -1;
        return max(lefth,righth)+1;
    }
};
