#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number;  
    for(int i=1;i<=number;i++)   {           
        for(int f=number-i-1;f>=0;f--){      
            cout<<" ";                      
        }
        // cout<<endl;
        for(int j=1;j<2*i;j++){
            cout<<char(64+j);
        }
        cout<<endl;
    }
    return 0;                            
}