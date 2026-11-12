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
    int sumNumbers(TreeNode* root) {
        vector<int>vec;
        vector<int>s;
        rootToleaf(root,vec,s);
        int ans=0;
        for(int i : s){
            ans+=i;
        }
        return ans;
    }

void rootToleaf(TreeNode *root,vector<int>&vec,vector<int>&s){
        if(root==NULL){
            return ;
        }
        else if(root->left==NULL && root->right==NULL){
            //leaf node;
            vec.push_back(root->val);
            sum(vec,s);
            vec.pop_back();
            return;
        }else{
            vec.push_back(root->val);
            rootToleaf(root->left,vec,s);
            rootToleaf(root->right,vec,s);
            vec.pop_back();
        }
        
    }

    void sum(vector<int>&p,vector<int>&s){
        int total=0;
        for(int n :p){
           total=total*10+n;
          
        }
        s.push_back(total);
    }

   
};