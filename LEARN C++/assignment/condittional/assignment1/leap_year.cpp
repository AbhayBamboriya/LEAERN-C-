#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year-";
    cin>>year;
    
    if(year%4==0){
        cout<<year<<" is Leap Year.";
    }
    else{
        cout<<year<<" is Leap not Year.";
    }
    return 0;
}