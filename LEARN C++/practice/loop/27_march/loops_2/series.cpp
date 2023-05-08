///1-2+3-4+5-6+7......

#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cout<<"Enter No of terms-:";                 
    cin>>n;                                   //n=3 
    for(int i=1;i<=n;i++){                     //i       1         2            3 
        if(i%2==0)    ans-=i;                //                    ans=-1       
        else          ans+=i;                             //ans=1               2
    }
    cout<<"Ans of series is "<<ans;
    return 0;
}