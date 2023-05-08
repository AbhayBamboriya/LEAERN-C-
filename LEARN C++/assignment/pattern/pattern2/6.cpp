#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number; 
   
    for(int i=1;i<=number;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
 
        for(int v=1;v<2;v++){
            cout<<"*";

        }
        
        for(int b=7;b>=i;b=b-1){
            if(i%2!=0)  cout<<"b";
            // else        continue;

        }

        // for(int v=1;v<2;v++){
        //     if(i>=number)   break;
        //     cout<<"*";


        // }
        cout<<endl;
        
        
    }
  
       
    
    return 0;                            
}