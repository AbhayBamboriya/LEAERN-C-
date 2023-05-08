#include<iostream>
using namespace std;
int main() {
    int number,a=64;
    cout<<"Enter No-";
    cin>>number;                         //number=4
    for(int i=1;i<=number;i++){           //i=1  2
        for(int j=1;j<=number;j++){      ///j=1    
            a+=j;
            cout<<char(a)<<" ";     
            a=64;                       //1 2 3 4 
        }                                //1 2 3 4
        cout<<endl;                      //1 2 3 4         
    }                                    //1 2 3 4 
    return 0;                            
}