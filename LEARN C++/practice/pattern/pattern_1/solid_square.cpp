#include<iostream>
using namespace std;
int main() {
    int sides;
    cout<<"Enter No of sides-";
    cin>>sides;                         //sides=5
    for(int i=1;i<=sides;i++){           //i=1  2   3   4   5
        for(int j=1;j<=sides;j++){      ///j=1     2
            cout<<'*';                  //*****
        }                               //*****
        cout<<endl;                     //*****          
    }                                   //*****
    return 0;                           //*****
}