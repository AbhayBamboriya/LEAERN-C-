#include<iostream>
#include<vector>
using namespace std;
vector<int> merging(vector<int>&V1,vector<int>&V2){
    int m=V1.size();
    int n=V2.size();
    vector<int> res(m+n);
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(V1[i]>V2[j]){
            res[k]=V2[j];
            k++;
            j++;
        }
        else{
            res[k]=V1[i];
            k++;
            i++;
        }
    }
    if(i==m){
        while(j<n){
            res[k]=V2[j];
            k++;
            j++; 
        }
        
    }
    else{
        while(i<m){
            res[k]=V1[i];
            k++;
            i++; 
        }

    }
    return res;
}
int main(){
    vector<int>V1={2,6,9,13,18,19};
    vector<int>V2={7,10,15,20,29,31};
    vector<int> v = merging(V1,V2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}