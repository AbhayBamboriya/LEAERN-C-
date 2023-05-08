// Table of Any no



#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter No for table";
    cin>>a;

    for(int i=1;i<=10;i++){
        b=a*i;
        cout<<a<<'*'<<i<<"="<<b<<endl;
    }

    return 0;
}