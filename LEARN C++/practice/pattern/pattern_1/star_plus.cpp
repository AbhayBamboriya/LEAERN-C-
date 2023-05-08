#include<iostream>
using namespace std;
int main() {
    int sides,mid;
    cout<<"Enter No of sides-";
    cin>>sides;   
    mid=(sides/2)+1;
    if(sides%2==0){
        cout<<"Enter odd no of sides";
    }     
    else{
        for(int i=1;i<=sides;i++){           
        for(int j=1;j<=sides;j++){
            if(i==mid || j==mid){
                cout<<'*';
            }  
            else{
                cout<<" ";
            }                         
        }                               
        cout<<endl;                         
        }                   
    }                               
                    
    return 0;                           
}