//100,97,94.....
#include<iostream>
using namespace std;
int main(){
    int n,a=100;
    cout<<"Enter no of terms-";
    cin>>n;

    for(int i=1;a>0;i++){
        cout<<a<<endl;
        a=a-3;
    }

    return 0;
}
