#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number; 
   
    for(int i=1;i<=number;i++)         cout<<i;
    for(int i=number-1;i>=1;i--)       cout<<i;
    cout<<endl; 
    for(int i=1;i<number;i++){
        for(int j=1;j<number-i+1;j++){
            cout<<j;
        }
        for(int g=1;g<2*i;g=g+1){
            cout<<" ";
        }
        for(int k=number-i;k>=1;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;                            
}