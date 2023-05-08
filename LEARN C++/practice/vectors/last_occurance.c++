#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    int a,el,search,s=0;
    cout<<"Enter how many elements you want to enter: ";
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"Enter element:";
        cin>>el;
        V.push_back(el);
    }
    cout<<"Enter element you want to search for last occurance: ";
    cin>>search;
    for(int i=a;i>=0;i--){
        if(V[i]==search){
            cout<<"Element's last occurance is at: "<<i+1;
            s++;
            break;

        }
        

    }
    if(s==0){
        cout<<"Element not found";
    }

    
    return 0;
}