#include<iostream>
using namespace std;
int main() {
    int number,b=1;
    cout<<"Enter No-:";
    cin>>number;  
    for(int i=1;i<2*number;i++){
        cout<<i;
    }
    cout<<endl;

    for(int i=1;i<=number-1;i++){
        
        for(int j=1;j<=number-i;j++){
            cout<<j;
        }
      
        for(int u=1;u<=b;u++){
            cout<<" ";
        }
        b=b+2;
        
        

        
        
        for(int u=i+number;u<2*number;u++){
            cout<<u;

        }
        cout<<endl;
    }
    
    return 0;                            
}