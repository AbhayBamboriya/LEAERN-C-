#include<iostream>
using namespace std;
int main( ) {
    int i ,ans=1;
    cout<<"Enter no for factorial-";
    cin>>i;                         //i=5   
    for(int j=i;j>0;j--){           //j=5       4       3       2       1
        ans*=j;                     //ans=5     20      60      120     120
    }
    cout<<"Factorial of "<<i<<" is "<<ans;
}