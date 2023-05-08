#include<iostream>
using namespace std;
int main() {
    int number,a,b;
    cout<<"Enter No-:";
    cin>>number;  
    for(int i=1;i<=number*2-1;i++){
        for(int j=1;j<=number*2-1;j++ ){
            a=i;
            b=j;
            if(i>number)        a=2*number-i;
            if(j>number)        b=2*number-j;
                
                
            if(a>b) cout<<number-b+1;
            else    cout<<number-a+1;
            
            


                
                


            
        }
        cout<<endl;
    }               
    return 0;                            
}