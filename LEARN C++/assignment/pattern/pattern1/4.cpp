// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include<iostream>
using namespace std;
int main() {
    int b,a=1;
    cout<<"Enter rows-";
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0) cout<<j;
            else       cout<<char(j+64);
            
        }
       
        cout<<endl;
    }
    return 0;                            
}