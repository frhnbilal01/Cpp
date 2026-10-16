#include<iostream>
using namespace std;
int main(){
    string haystack,needle;
    cout<<"Enter the haystack string: ";
    getline(cin,haystack);
    cout<<"Enter the needle string: ";
    getline(cin,needle);
    int l=needle.size();
    int n=haystack.size();
    string temp;
    for(int j=0;j<=(n-l);j++){
        int c=0;
        temp="";
        for(int i=j;c<l;i++){
        temp+=haystack[i];
        c++;
        }
        if(temp==needle){
            cout<<j<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
