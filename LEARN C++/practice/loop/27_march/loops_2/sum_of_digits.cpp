///doubt

#include<iostream>
using namespace std;
int main(){
    int i,c=0,d;
    cout<<"Enter No-:";                 
    cin>>i;                                     //i=123
    while(i>0){
        d=i%10;                                //d=3    2    1
        i-=d;                                  //120    10   0
        i/=10;                                 //i=12   1    0
        c+=d;                                   //c=3   5    6
    }
    cout<<"Sum is- "<<c;
    return 0;
}