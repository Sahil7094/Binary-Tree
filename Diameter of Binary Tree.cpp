/*
Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
The length of a path between two nodes is represented by the number of edges between them.
Example 1:
Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
Example 2:
Input: root = [1,2]
Output: 1
Code :-
  */
class Solution {
public:
     int diameter(TreeNode* root, int& result) {
        if(!root)
            return 0;
        
        int left  = diameter(root->left, result);
        int right = diameter(root->right, result);
        
        result = max(result, left + right); 
        return max(left, right) + 1;
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        
        int result = INT_MIN;
        
        diameter(root, result);
        
        return result;
        
    }
};
