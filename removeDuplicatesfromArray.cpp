#include<iostream>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int k=1;
        int i=1;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }//if
            i++;
        }//while
        return k;
}
int main(){
    vector<int> nums={1,1,2};
    int k=removeDuplicates(nums);
    cout<<"The new length of the array is: "<<k<<endl;
    cout<<"The modified array is: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}