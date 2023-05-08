#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number;  
    for(int i=1;i<2*number;i++){

        for(int j=1;j<=2*i;j=j+3){
            cout<<"*";
        }
        cout<<endl;
    }            
    return 0;                            
}