#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter No-";
    cin>>b;
    if(b%15==0){
        cout<<b<<" is divisible by 3 and 5"<<endl;
    }
    else{
        cout<<b<<" is not divisible by 3 and 5"<<endl;
    }
    if(b%5==0 && b%3==0){
        cout<<b<<" is divisible by 3 and 5";
    }
    else{
        cout<<b<<" is not divisible by 3 and 5";
    }
    return 0;
}