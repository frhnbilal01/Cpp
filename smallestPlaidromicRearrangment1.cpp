#include<iostream>
#include<vector>
#include<string>
using namespace std;
string smallestPalindrome(string s) {
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }//fr loop
        string half="";
        for(int i=0;i<26;i++){
            for(int j=0;j<freq[i]/2;j++){
                half+=char('a'+i);
            }//inner
        }//outer
        string ans=half;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                ans+=char('a'+i);
                break;
            }//if
        }//for loop
        for(int i=half.size()-1;i>=0;i--){
            ans+=half[i];
        }//for loop
        return ans;
    }string smallestPalindrome(string s) {
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }//fr loop
        string half="";
        for(int i=0;i<26;i++){
            for(int j=0;j<freq[i]/2;j++){
                half+=char('a'+i);
            }//inner
        }//outer
        string ans=half;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                ans+=char('a'+i);
                break;
            }//if
        }//for loop
        for(int i=half.size()-1;i>=0;i--){
            ans+=half[i];
        }//for loop
        return ans;
    }
    int main() {
        string s;
        cout << "Enter a string: ";
        cin >> s;
        string result = smallestPalindrome(s);
        cout << "Smallest palindromic rearrangement: " << result << endl;
        return 0;
    }