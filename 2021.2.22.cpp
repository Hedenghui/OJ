#include<iostream>
using namespace std;
#include<vector>
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

 class solution {
 public:
     TreeNode* _buildtree(vector<int>& preorder, vector<int>& inorder,int& prei,int inbegin,int inend)
     {
         if(inbegin>inend)
             return NULL;

         TreeNode* root=new TreeNode(preorder[prei]);
         int rooti=inbegin;
         while(rooti<inend)
         {
             if(inorder[rooti]==preorder[prei])
                 break;
             else
                 ++rooti;
         }
         if(inbegin<=rooti-1)
             root->left=_buildtree(preorder,inorder,++prei,inbegin,rooti-1);
         else
             root->left=NULL;

         if(rooti+1<=inend)
             root->right=_buildtree(preorder,inorder,++prei,rooti+1,inend);
         else
             root->right=NULL;

         return root;
     }
     TreeNode* buildtree(vector<int>& preorder, vector<int>& inorder) {
         int prei=0;
         int inbegin=0;
         int inend=inorder.size()-1;
         return _buildtree(preorder, inorder,prei,inbegin,inend);
     }
 };
 int main()
 {
	 return 0;
 }