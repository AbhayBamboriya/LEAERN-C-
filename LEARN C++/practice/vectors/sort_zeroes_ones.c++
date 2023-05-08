#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    int a,el,count_zeroes=0,count_ones=0;
    cout<<"Enter how many no of zeroes and ones you want to enter: ";
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"Enter element:";
        cin>>el;
        V.push_back(el);
    }
    for(int q=0;q<a;q++){
        if(V[q]==0){
            count_zeroes++;
        }
        else{
            count_ones++;
        }

    }
    int o=0;
    while(count_zeroes>0){
            V[0]=0;
            count_zeroes--;
            o++;
    }
    while(count_ones>0){
            V[o]=1;
            count_ones--;
            o++;
    }
    for(int i=0;i<a;i++){
        cout<<V[i]<<" ";
    
    }
    return 0;
}