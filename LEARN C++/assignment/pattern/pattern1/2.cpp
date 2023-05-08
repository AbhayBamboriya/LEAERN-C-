// 1234
// 123
// 12
// 1



#include<iostream>
using namespace std;
int main() {
    int b,a=1;
    cout<<"Enter rows";
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=b-i+1;j++){
            cout<<j;
            
        }
       
        cout<<endl;
    }
    return 0;                            
}