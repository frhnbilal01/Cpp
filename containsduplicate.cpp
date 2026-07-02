#include<iostream>
#include<vector>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<(nums.size()-1);i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }//for loop
        return false;
    }
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    cout<<containsDuplicate(nums);
    return 0;
}