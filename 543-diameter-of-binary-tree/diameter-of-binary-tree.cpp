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
    int diameterOfBinaryTree(TreeNode* root) {
       return diam(root).first-1;


    }
    pair<int,int> diam(TreeNode* root){ //(dia,height)
        if(root==NULL){
            return make_pair(0,0);
        }
        pair<int,int> leftinfo=diam(root->left);
        pair<int,int> rightinfo=diam(root->right);
        int currdia=leftinfo.second+rightinfo.second+1;
        int finaldia=max(currdia,max(leftinfo.first,rightinfo.first));
        int finalht=max(leftinfo.second,rightinfo.second)+1;
        return make_pair(finaldia,finalht);
    }
};