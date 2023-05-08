#include<iostream>
using namespace std;
int main(){
    int sides;
    cout<<"Enter no of sides-:";
    cin>>sides;
    for(int i=1;i<=sides;i++){
        for(int j=(sides-i);j>0;j--){
            cout<<" ";
        }
        for(int m=0;m<=4;m++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}