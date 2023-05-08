#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number;  
    for(int i=1;i<number;i++)   {           
        for(int f=number-i-1;f>=1;f--){      
            cout<<" ";                      
        }
        // cout<<endl;
        for(int j=1;j<2*i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;                            
}