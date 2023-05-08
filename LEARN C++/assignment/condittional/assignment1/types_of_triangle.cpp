# include<iostream>
using namespace std;
int main(){
    int a,b,c;

    cout<<"Enter first side-";
    cin>>a;
    cout<<"Enter Second side-";
    cin>>b;
    cout<<"Enter Third side-";
    cin>>c;
    
    if(a!=b && b!=c && c!=a) {
        cout<<"Triangle is scalene ";
    }   
    if(a==b || b==c) || c==a){
        cout<<"Triangle is isosceles ";
    }
    if(a==b && b==c && c==a){
        cout<<"Triangle is equilateral ";
    }     
    return 0;
}