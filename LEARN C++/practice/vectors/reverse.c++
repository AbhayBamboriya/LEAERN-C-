#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    vector<int>reverse;
    int a,el;
    cout<<"Enter how many elements you want to enter: ";
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"Enter element:";
        cin>>el;
        V.push_back(el);
    }
    for(int q=0;q<a;q++){
        cout<<V[q]<<" ";

    }
    cout<<endl;
    for(int j=0;j<a;j++){
        reverse.push_back(V[a-j-1]);
    }
    for(int q=0;q<a;q++){
        cout<<reverse[q]<<" ";

    }
    return 0;
}