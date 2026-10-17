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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL){
            return true;
        }
        if(root==NULL) return false;
        queue<TreeNode*>q;
        find(root,subRoot,q);
        if(q.empty()){
            return false;
        }else{
            while(!q.empty()){
                if(check(q.front(),subRoot)==true){
                    return true;
                }else{
                    q.pop();
                }
            }
            return false;
        }
    }

    queue<TreeNode*> find(TreeNode* root,TreeNode* subRoot,queue<TreeNode*>&q){
        if(root==NULL){
            return q;
        }
        if(root->val==subRoot->val){
             q.push(root);
        }
        find(root->left,subRoot,q);
        find(root->right,subRoot,q);
        return q;
    }

    bool check(TreeNode* root,TreeNode* subRoot){
        if(root==NULL&&subRoot==NULL){
            return true;
        }
        if(root==NULL || subRoot==NULL){
            return false;
        }
        if(root->val!=subRoot->val){
            return false;
        }
        return check(root->left,subRoot->left)&&check(root->right,subRoot->right);
    }

};