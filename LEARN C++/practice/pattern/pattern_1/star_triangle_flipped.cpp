#include<iostream>
using namespace std;
int main() {
    int sides;
    cout<<"Enter No of sides-";
    cin>>sides;                         
    for(int i=1;i<=sides;i++){    
        for(int k=1;k<=sides-i;k++){
            cout<<" ";
        } 
        for(int j=1;j<=i;j++){      
            cout<<"*";
        }             
                     
        cout<<endl;                              
    }                                
    return 0;                    
}