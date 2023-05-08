#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{1,1,1,1,},{1,1,1,1,},{1,2,1,1,},{5,1,1,1,}};
    int sum=0;
    for(int i=0;i<=3;i++){
        for(int j=0;j<=3;j++){
            sum+=arr[i][j];

        }
    }
    
    cout<<sum;
    return 0;
}