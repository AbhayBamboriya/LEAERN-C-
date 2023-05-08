#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,200,3,4},{5,68,7,8},{9,10,11,12},{13,14,15,1006}};
    int largest=arr[0][0];
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            if(largest<arr[i][j]){
                largest=arr[i][j];
                
            }

        }
    }
    
    cout<<largest;
    return 0;
}