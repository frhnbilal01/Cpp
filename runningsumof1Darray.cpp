#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]+j);
            j=j+nums[i];
        }//for loop
        return temp;
    }
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    vector<int> result=runningSum(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}