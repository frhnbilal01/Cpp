#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
        return 0;

        int max_sum=nums[0];
        int include_current=nums[0];

        for(int i=1;i<nums.size();++i){
            int n=nums[i];
            include_current=max(include_current+n,n);
            max_sum=max(max_sum,include_current);
        }//loop ends
        return max_sum;
    }
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
    return 0;
}