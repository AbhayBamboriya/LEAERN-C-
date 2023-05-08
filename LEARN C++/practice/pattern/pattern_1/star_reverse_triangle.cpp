#include<iostream>
using namespace std;
int main() {
    int sides;
    cout<<"Enter No of sides-";
    cin>>sides;                         //sides=3
    for(int i=1;i<=sides;i++){          //i=1  2    3
        for(int j=sides;j>=i;j--){      ///j=3   2   3
            cout<<'*'<<" ";             //* * *
        }                               //* *
        cout<<endl;                     //*    
    }                                   
    return 0;                           
}