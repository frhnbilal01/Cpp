#include<iostream>
#include<vector>
#include<climits>   
using namespace std;    
int maxProduct(vector<int>& nums) {
        int largest=INT_MIN;
        int second=INT_MIN;
        int i=0;
        while(i<nums.size()){
            if(nums[i]>largest){
                second=largest;
                largest=nums[i];
            }//if
            else if(nums[i]>second){
                second=nums[i];
            }//else if
            i++;
        }//while
        return (largest-1)*(second-1);
    }
    int main(){
        vector<int> nums={3,4,5,2};
        cout<<maxProduct(nums);
        return 0;
    }