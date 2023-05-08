#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    int a,el,low=0;
    cout<<"Enter how many no of zeroes and ones you want to enter: ";
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"Enter element:";
        cin>>el;
        V.push_back(el);
    }
    int high=a-1;
    while (high>low){
        if(V[low]==0){
            low++;
        }
        if(V[high]==1){
            high--;
        }
        if(V[high]==0 && V[low]==1){
            int temp=0;
            temp=V[high];
            V[high]=V[low];
            V[low]=temp;
            low++;
            high--;
        }
    }
    

    //printing after change
    for(int i=0;i<a;i++){
        cout<<V[i]<<" ";
    
    }
    return 0;
}