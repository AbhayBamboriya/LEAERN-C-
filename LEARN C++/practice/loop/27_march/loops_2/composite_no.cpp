#include<iostream>
using namespace std;
int main() {
    int x,b=0;
    cout<<"Enter No for checking-:";
    cin>>x;
    if(x<=1){
        cout<<x<<" cant be judged";
        return 0;
    }
    for (int i = 2; i <= x/2; i++) {
        if(x%i==0){
            b++;
            break;
        } 
    }
    if(b!=0)  cout<<"No is composite";
    else      cout<<"No is prime";
    return 0;
}