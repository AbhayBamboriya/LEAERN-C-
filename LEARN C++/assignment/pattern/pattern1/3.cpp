// A
// A B
// A B C
// A B C D




#include<iostream>
using namespace std;
int main() {
    int b,a=1;
    cout<<"Enter rows-";
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
            
        }
       
        cout<<endl;
    }
    return 0;                            
}