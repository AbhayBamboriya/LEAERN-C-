/////////DOUBT  DOUBT   DOUBT   DOUBT   DOUBT
#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number;  
    int a=1;                                //number=4
    for(int i=1;i<=number;i++){             //i=1           2       3       4
        for(int j=number-i;j>0;j--){        ///j=3          2       1       
            cout<<" ";                      //@@@           @@      @
        }
        // cout<<endl;
        for(int s=1;s<=i;s++){
            cout<<s+1;
            cout<<s;
            cout<<s+1;
        }
        cout<<endl;
   }
    return 0;                            
}