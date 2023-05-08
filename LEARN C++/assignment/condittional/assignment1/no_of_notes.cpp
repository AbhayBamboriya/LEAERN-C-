#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Amount-";
    int m;
    cin>>m;
    int rupees[]={1,2,5,10,20,50,100,200,500,2000};
    int a=m%10;
    
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            a==rupees[i]+rupees[j];

        }
    }
    return 0;
}