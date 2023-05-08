#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter row: ";
    cin>>a;
    cout<<"Enter column: ";
    cin>>b;
    int arr[a][b];
    int transpose[b][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    
    
    return 0;
}