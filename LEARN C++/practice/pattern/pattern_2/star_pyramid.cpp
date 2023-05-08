#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number;  
                  
    for(int i=1;i<=number;i++){        
        for(int u=0;u<i;u++){
            cout<<"*";
        } 
        for(int a=1;a<4-i;a++){
            cout<<" ";
        }
        cout<<endl;          
    }                           
    return 0;                            
}