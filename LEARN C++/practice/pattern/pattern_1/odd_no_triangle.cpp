#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-";
    cin>>number;                         //number=3
    for(int i=1;i<=number;i++){           //i=1  2  3
        for(int j=1;j<=(2*i)-1;j+=2){         //j=1    
            cout<<j<<" ";                 //1 
        }                                //1 3
        cout<<endl;                      //1 3      
    }                                    //1 2 3 4 
    return 0;                            
}