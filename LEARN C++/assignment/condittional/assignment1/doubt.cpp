#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter First Side-";
    cin>>a;
    cout<<"Enter Second Side-";
    cin>>b;
    cout<<"Enter Third Side-";
    cin>>c;
    if((a==b) && (b==c) && (c==a)){
        cout<<"Triangle is Equilateral Triangle.";
        break
    }
   
    if((a!=b) && (b!=c) && (c!=a)){ 
        cout<<"Triangle is Scalene Triangle.";
        exit;
    }       
    else                              cout<<"Triangle is Isosceles Triangle";
    return 0;
}