#include<iostream>
using namespace std;
int main(){
    int x ,y, z;
    cin>>x;
    cin>>y;
    cin>>z;
    if(x>y&&x>z){
        cout<<x<<"It is greatest";
    }
    if(x<y&&y>z){
        cout<<y<<"It is greatest";
    }
    else{
        cout<<z<<"is gratest";
    }

    return 0;
}