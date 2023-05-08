#include<iostream>
using namespace std;
int main(){
    
    int number,a=1;
    cout<<"Enter No-";
    cin>>number;                      
    for(int i=1;i<=number;i++){
              //i=1  2
        for(int j=1;j<=i;j++){         
            cout<<a<<" "; 
            a++;                    
        }                                
        cout<<endl;                             
    }                                    
    return 0;                            
}