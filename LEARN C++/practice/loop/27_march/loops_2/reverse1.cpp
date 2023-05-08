#include<iostream>
using namespace std;
int main(){
    int no,reverse=0,last_digit=0;
    cout<<"Enter No:";
    cin>>no;                                //no=123
    while(no>0){
        last_digit=no%10;                   //3,2,1
        reverse+=last_digit;                //3,32,321
        reverse*=10;                        //30 ,320,3210
        no/=10;                             //12 ,1

    }
    cout<<"Reverse No of "<<no<<" is "<< reverse/10;
    return 0;
} 