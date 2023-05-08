#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-";
    cin>>number;                         //number=4
    for(int i=1;i<=number;i++){ 
        for(int k=1;k<=number-i;k++){
            cout<<" ";
        }    //i=1  2
        for(int j=1;j<=i;j++){      ///j=1    
            cout<<j;                     //1 2 3 4 
        }                                //1 2 3 4
        cout<<endl;                      //1 2 3 4         
    }                                    //1 2 3 4 
    return 0;                            
}