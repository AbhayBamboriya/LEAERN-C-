#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    int arr[v.size()];
    int brr[v.size()];
    arr[0]=-1;
    brr[v.size()-1]=-1;
    int a=v[0];
    //for arr
    for(int i=1;i<v.size();i++){
        if(a<v[i]){
            arr[i]=a;
            a=v[i];
        }
        else     arr[i]=a;
        
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }

    //for brr
    int s=v[v.size()-1];
    for(int i=v.size()-2;i>=0;i--){
        if(v[i]>s){
            brr[i]=s;
            s=v[i];
        }
        else{
            brr[i]=s;
        }

    }
    cout<<endl;
     for(int i=0;i<v.size();i++){
        cout<<brr[i]<<" ";
    }
    
    for(int j=1;j<v.size()-1;j++){
        if(arr[j]>brr[j])   brr[j]=brr[j];
        else                brr[j]=arr[j];

    }
    cout<<endl;
     for(int i=0;i<v.size();i++){
        cout<<brr[i]<<" ";
    }
    int bucket=0;
    for(int i=1;i<v.size()-1;i++){
        if(brr[i]>v[i]){
            bucket+=brr[i]-v[i];
        }
        else    continue;
    }
    cout<<endl;
    cout<<bucket;
    return 0;
}