#include<iostream>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int i=digits.size()-1;
    while(i>=0){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }//if
        digits[i]=0;
        i--;
}//while
    digits.insert(digits.begin(),1);
    return digits;
}
int main(){
    vector<int> digits={9,9,9};
    vector<int> result=plusOne(digits);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}