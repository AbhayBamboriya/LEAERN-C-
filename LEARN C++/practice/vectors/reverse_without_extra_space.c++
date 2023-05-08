#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    int a,el;
    cout<<"Enter how many elements you want to enter: ";
    cin>>a;
    int low=0,high=a-1;
    for(int i=0;i<a;i++){
        cout<<"Enter element:";
        cin>>el;
        V.push_back(el);
    }
    for(int q=0;q<a;q++){
        cout<<V[q]<<" ";

    }
    cout<<endl;
    cout<<"Reverse";
    cout<<endl;
    while(high>=low){
        int temp;
        temp=V[high];
        V[high]=V[low];
        V[low]=temp;
        high--;
        low++;

    }
    for(int i=0;i<a;i++){
        cout<<V[i]<<" ";
    
    }
    
    
    return 0;
}