#include<iostream>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int i=0;
    while(i<nums.size()){
        if(nums[i]>=target)
        return i;
        i++;
    }//while
    return nums.size();
}
int main(){
    vector<int> nums={1,3,5,6};
    int target=5;
    int index=searchInsert(nums,target);
    cout<<index;
    return 0;
}