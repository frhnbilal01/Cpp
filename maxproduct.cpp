#include<iostream>
using namespace std;
int maxProduct(int n) {
    int a=0;
    int b=0;
    while(n>0){
        int digit=n%10;
        n=n/10;
        if(digit>a){
            b=a;
            a=digit;
        }//if
        else if(digit>b){
            b=digit;
        }///else if
    }//while
   return a*b;
}
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<"Max Product Between the digi of Number is :"<<maxproduct(n);
    return  0;
}