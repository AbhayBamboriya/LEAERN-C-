#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter row: ";
    cin>>a;
    cout<<"Enter column: ";
    cin>>b;
    int arr[a][b];
    //taking input
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    //printing array
     for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(a==b){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(i>j){
                    int temp=arr[i][j];         
                    arr[i][j]=arr[j][i];
                    arr[j][i]=temp;
                }
            
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                int temp=arr[i][j];         
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
                
            
            }
        }
        cout<<endl;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    
    
    

    
    
    return 0;
}