#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={1,3,2};
    //finding pivot index
    int idx=-1;
    for(int i=v.size()-2;i>=0;i--){   //i=0
        if(v[i]<v[i+1]){    //1<3
            idx=i;          //idx=0
            break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
        exit;
    }
    
    reverse(v.begin()+idx+1,v.end());//1,2,3
    
    //swaping
    int a;
    for(int i=idx+1;i<v.size();i++){
        if(v[i]>v[idx]){
            a=i;
            break;
        }
    }
    int temp=v[a];       //temp=3
    v[a]=v[idx];       //v[2]=1
    v[idx]=temp;                  //v[0]=3

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}