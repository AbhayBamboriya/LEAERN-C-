#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number;  
    for(int i=0;i<number;i++){
            for(int s=number-1-i;s>0;s--)          cout<<" ";
            for(int a=1;a<=i;a++)           cout<<a; 
            
            for(int c=i+1;c>=1;c--)         cout<<c;
            
                
            
            cout<<endl;
    }                         
    return 0;                            
}