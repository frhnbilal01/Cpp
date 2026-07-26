#include<iostream>
#include<climits>
using namespace std;
int maximumProduct(vector<int>& nums) {
        int largest=INT_MIN;
        int second=INT_MIN;
        int third=INT_MIN;
        int smallest=INT_MAX;
        int sec_smallest=INT_MAX;
        int i=0;
        while(i<nums.size()){
            if(nums[i]>largest){
                third=second;
                second=largest;
                largest=nums[i];
            }//if
            else if(nums[i]>second){
                third=second;
                second=nums[i];
            }//else if
            else if(nums[i]>third){
                third=nums[i];
            }//else if
            //-------
            if(nums[i]<smallest){
                sec_smallest=smallest;
                smallest=nums[i];
            }//if
            else if(nums[i]<sec_smallest){
                sec_smallest=nums[i];
            }//else if
            i++;
        }//while
        return max(largest*second*third,largest*smallest*sec_smallest);
    }
    int main(){
        vector<int> nums={1,2,3,4};
        cout<<maximumProduct(nums);
        return 0;
    }