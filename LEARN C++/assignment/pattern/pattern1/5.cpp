// *
// **
// ***
// ****     n=4
// ***
// **
// *



#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter no of terms-";
    cin>>n;
    for(int i=1;i<2*n;i++){
       
        for(int m=1;m<=n+1-i;m++){
            cout<<"*";
        }
        for(int j=1;(j<=i && i<=n);j++){
            cout<<"*";

        }
        
        
        cout<<endl;

    }
    return 0;                            
}