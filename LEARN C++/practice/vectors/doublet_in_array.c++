#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    int a,el,sum,doublets=0;
    cout<<"Enter how many elements you want to enter: ";
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"Enter element:";
        cin>>el;
        V.push_back(el);
    }
    cout<<"Enter sum for doublet: ";
    cin>>sum;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(sum==V[i]+V[j]){
                doublets++;
                cout<<"("<<V[i]<<" "<<V[j]<<")";
            }
            else{
                continue;
            }

        }
        

    }
    cout<<endl;
    cout<<"Doublets are: "<<doublets;
    return 0;
}