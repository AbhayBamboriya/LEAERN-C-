#include<iostream>
using namespace std;
int main(){
    int arr1[4][4]={{1,1,1,1,},{1,1,1,1,},{1,2,1,1,},{5,1,1,1}};
    int arr2[4][4]={{1,1,1,2,},{1,1,11,66},{1,2,1,155},{5,1,13,1}};
    
    cout<<"first array";
    cout<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr1[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"second array";
    cout<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr2[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";

        }
        cout<<endl;
    }
    
    
    
    return 0;
}