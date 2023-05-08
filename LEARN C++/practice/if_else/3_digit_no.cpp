#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter No-";
    cin>>b;
    if(b>99 && b<1000){
        cout<<b<<" is a three digit no";
    }
    else{
        cout<<b<<" is not a three digit no";
    }
    return 0;
}