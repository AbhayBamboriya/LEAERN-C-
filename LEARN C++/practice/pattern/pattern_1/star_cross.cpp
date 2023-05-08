#include<iostream>
using namespace std;
int main() {
    int sides,mid;
    cout<<"Enter No of sides-";
    cin>>sides;   
    mid=(sides/2)+1;
    for(int i=1;i<=sides;i++){           
            for(int j=1;j<=sides;j++){
                if(i==j || j==sides+1-i){
                    cout<<'*';
                }  
                else{
                    cout<<" ";
                }                         
        }                               
        cout<<endl;                         
        }                   
                                  
                    
    return 0;                           
}