#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter No-";
    cin>>b;
    if(b%5==0){
        cout<<b<<" is divisible by 5";
    }
    else{
        cout<<b<<" is not divisible by 5";
    }
    return 0;
}