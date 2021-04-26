/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
      if (pre.size() != vin.size()) {return NULL;}
      int len = pre.size();
      if (len ==0) {
          return NULL;
      }
    rootValue = pre[0]; // preorder's first value is root
    TreeNode* root = new TreeNode(rootValue);
    int i = 0;
    for (int i = 0; i < len; i++){
        if (vin[i] == rootValue) break;
    }
    if (rootValue == len) return NULL; // badinput
    vector<int> leftPre(i); vector<int> leftIn(i);
    vector<int> rightPre(len - i - 1); vector<int> rightIn(len - i - 1);
    for (int j=0; j<i; j++){
        leftPre[j] = pre[j+1];
        leftIn[j] = vin[j];
    }
    for (int j=0; j<len-i-1; j++){
        rightPre[j] = pre[1 + i + j];
        rightIn[j] = vin[1 + i + j];
    }
    root->left = reConstructBinaryTree(leftPre, leftIn);
    root->right = reConstructBinaryTree(rightPre, rightIn);
    return root;

    
    }
};