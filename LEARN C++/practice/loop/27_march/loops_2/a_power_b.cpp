#include<iostream>
using namespace std;
int main() {
    int a,b,ans=1;
    cout<<"Enter base No-:";
    cin>>a;                             //3
    cout<<"Enter exponent No-:";
    cin>>b;                             //3         
    for(int i=0;i<b;i++){               //i=0       1       2
        ans*=a;                         //ans=3     9       27

    }
    cout<<a<<" raished to the power "<<b<<" is "<<ans;
    return 0;
}