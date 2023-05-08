// 0,1,1,2,3,5,8,13
#include<iostream>
using namespace std;
int main( ) {
    int n,first=0,second=1,ans;
    cout<<"Enter no of terms";
    cin>>n;
    if(n==1){
        cout<<"1 ";
        return 0;
    }
    if(n==2){
        cout<<"2 ";
        return 0;
    }
    else{       
        cout<<0<<" "<<1<<" ";                                //n=5
        for(int i=0;i<n-2;i++){                   //i=0       1       2       3       4
            ans=first+second;                   //ans=1     2       3       5       8
            first=second;                       //first=1   1       2       3       5
            second=ans;
            cout<<second<<" ";                         //second=1  2       3       5       8
        }
    }


}