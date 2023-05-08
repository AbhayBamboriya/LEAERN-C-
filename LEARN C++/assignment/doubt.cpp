#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter Your Marks-";
    cin>>A;
    cout<<"Enter Your Marks-";
    cin>>B;
    cout<<"Enter Your Marks-";
    cin>>C;
    if(A>B){
        if(B>C)          cout<<'C'<<"has least marks.";
        else             cout<<'B'<<"has least marks.";
    }
    else{
        if(A>C)         cout<<'C'<<"has least marks.";
        else            cout<<'A'<<"has least marks.";
    }

    return 0;
}