#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int i=1;
        while(i<=n){
            if(i%3==0 && i%5==0){
                ans.push_back("FizzBuzz");
            }//if
            else if(i%3==0){
                ans.push_back("Fizz");
            }//else if
            else if(i%5==0){
                ans.push_back("Buzz");
            }//else if
            else{
                ans.push_back(to_string(i));
            }

            i++;
        }//while
        return ans;
    }
int main(){
    int n=15;
    vector<string> ans=fizzBuzz(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}