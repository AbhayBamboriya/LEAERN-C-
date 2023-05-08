//AP-1,3,5,7,9,11......


#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter no of terms-";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+2;
    }

    return 0;
}
