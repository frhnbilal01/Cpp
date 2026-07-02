#include<iostream>
#include<vector>
using namespace std;
vector<int> getConcatenation(vector<int>& nums) {
        vector<int> temp;
     int n=nums.size();
     for(int i=0;i<(2*n);i++){
        temp.push_back(nums[i%n]);
     }//for loop

     return temp;
    }
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    vector<int> result=getConcatenation(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}