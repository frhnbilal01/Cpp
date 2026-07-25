#include<iostream>
using namespace std;
TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildtree(nums,0,nums.size()-1);
    }//function
TreeNode* buildtree(vector<int>& nums , int left , int right){
    if(left>right)
    return nullptr;
    int mid=(left+right)/2;
    TreeNode* root= new TreeNode(nums[mid]);
    root->left=buildtree(nums,left,mid-1);
    root->right=buildtree(nums,mid+1,right);
    return root;
}//function
int main(){
    vector<int> nums={-10,-3,0,5,9};
    TreeNode* root=sortedArrayToBST(nums);
    return 0;
}