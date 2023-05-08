// count no of digits
// DOUBT
#include<iostream>
using namespace std;
int main(){
    int i,c=0;
    cout<<"Enter No-:";
    cin>>i;
    while(i>0){
        i=i%10;
        c++;
    }
    cout<<"no of digits-"<<c;
    return 0;
}