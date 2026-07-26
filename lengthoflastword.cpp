#include<iostream>
using namespace std;
int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int end_idx=0;
        while(i>=0){
            if(s[i]!=' ')
            break;
            i--;
        }//while
        end_idx=i;
        while(i>=0 && s[i]!=' '){
            i--;
        }//while
        return end_idx-i;
    }
int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    cout<<"Length of last word of string is : "<<lengthOfLastWord(s);
    return 0;
}