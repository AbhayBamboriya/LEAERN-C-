#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number; 

    for(int i=1;i<2*number;i++){
        cout<<char(i+64);
    }
    cout<<endl; 
    for(int i=1;i<number;i++){
        for(int j=1;j<number-i+1;j++){
            cout<<char(j+64);
        }
        for(int g=1;g<2*i;g=g+1){
            cout<<" ";
        }
        for(int k=number+i-1;k<(number*2)-1;k++){
            cout<<char(k+65);
        }
        cout<<endl;
    }
    return 0;                            
}