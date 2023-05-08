#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<"Enter Element"<<endl;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<endl;
    
    //main code
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i%2!=0)  cout<<a[i][2-j]<<" ";
            else    cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;


    for(int i=2;i>=0;i--){
        for(int j=0;j<3;j++){
            if (i%2!=0) cout<<a[i][2-j]<<" ";
            else    cout<<a[i][j]<<" ";
        }
        //cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            if(j%2!=0)  cout<<a[2-i][j]<<" ";
            else    cout<<a[i][j]<<" ";
        }
    }
    return 0;
}