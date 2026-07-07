#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height) {
    int min_h=height[0];
    int min_idx=0;
    int max_h=height[height.size()-1];
    int max_idx=height.size()-1;
    if(min_h>max_h){
        min_h=max_h;
        min_idx=max_idx;
        max_h=height[0];
        max_idx=0;
    }//if ends

    int w=height.size()-1;
    int max_a=w*min_h;
    while(w>0){
        int idx=min_idx;
        while(height[idx]<=min_h){
            if(min_idx<max_idx)
                idx++;
            else
                idx--;
            w--;
            if(w<1)
                break;
        }//inner while
        if(height[idx]>max_h){
            min_h=max_h;
            max_h=height[idx];
            min_idx=max_idx;
            max_idx=idx;
        }//if ends
        else{
            min_h=height[idx];
            min_idx=idx;
        }//else ends
        max_a=max(max_a,w*min_h);
    }//outer while
    return max_a;
    }
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height);
    return 0;
}
