#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter First No-";
    cin>>a; 
    cout<<"Enter Second No-";
    cin>>b; 
    cout<<"Enter Third No-";
    cin>>c; 
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest among all.";
        }
        else{
            cout<<c<<" is greatest among all.";
        }
    }
    else{
        if(c>b){
            cout<<c<<" is greatest among all.";
        }
        else{
            cout<<b<<" is greatest among all.";
        }
    }
    return 0;
}