#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array ELements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int w,c;
    c=0;
    cout<<"Enter Sub-array Size: ";
    cin>>w;
    for(int i=0;i<w;i++){
        c=c+arr[i];
    }//first window
    int max=c;
    for(int i=0;i<(n-w);i++){
        c=(c-arr[i])+arr[i+w];
        if(c>max){
            max=c;
        }
    }
    cout<<"Maximum Sum of Sub-array: "<<max<<endl;
}