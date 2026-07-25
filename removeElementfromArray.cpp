#include<iostream>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int k=0;
    int i=0;
    while(i<nums.size()){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }//while
    return k;
}
int main(){
    vector<int> nums={3,2,2,3};
    int val=3;
    int k=removeElement(nums,val);
    cout<<"The new length of the array is: "<<k<<endl;
    cout<<"The modified array is: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
