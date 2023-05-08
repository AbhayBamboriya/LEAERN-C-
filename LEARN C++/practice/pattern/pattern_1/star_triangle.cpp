#include<iostream>
using namespace std;
int main() {
    int sides;
    cout<<"Enter No of sides-";
    cin>>sides;                         //sides=3
    for(int i=1;i<=sides;i++){          //i=1  2
        for(int j=1;j<=i;j++){          ///j=1     
            cout<<'*';                  //*
        }                               //**
        cout<<endl;                     //***       
    }                                   //*****
    return 0;                           //*****
}