//1,2,4,8,16........
//DOUBT



#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter no of terms-";
    cin>>n;
    for(int i=0;i<n;i=i+1){
        cout<<a<<"  "; 
        a*=2;
    }

    return 0;
}
