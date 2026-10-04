#include<iostream>
using namespace std;
int main(){
    int r , c , n;
    cin>>r>>c>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int row=(arr[i]-1)/c;  // -1 is only applicable if the index in the problem is not zero based
        int col=(arr[i]-1)%c;
        if(row%2==0){
            cout<<row+1<<" "<<col+1<<endl;
        }
        else{
            cout<<row+1<<" "<<c-col<<endl;
        }
    }
}