#include<iostream>
using namespace std;
int myAtoi(string s) {
        int n=s.length();
        int sign=1;
        long long number=0;
        int i=0;
        
        while(i<n && s[i]==' '){
            i++;
        }//while
        if(i<n && (s[i]=='-'||s[i]=='+')){
            if(s[i]=='-')
            sign=-1;
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9'){
            int digit=s[i]-'0';
             // Check overflow before number*10+digit
            if(number>2147483647/10 || (number==2147483647/10 && digit>2147483647%10)) {
                if(sign==1){
                    return 2147483647;
                }//if
                else{
                    return -2147483648;
                }//else
            }//if
            number=number*10+digit;
            i++;
        }//while
        
        number=sign*number;

        
        return number;
    }//function
int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    cout<<"String to Integer is :"<<myAtoi(s);
    return 0;
}