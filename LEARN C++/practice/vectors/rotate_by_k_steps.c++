#include<iostream>
#include<vector>
using namespace std;
void reverse_part(vector<int>&V,int low,int high){
    
    while(high>=low){
       
        int temp;
        temp=V[high];
        V[high]=V[low];
        V[low]=temp;
        high--;
        low++;
    }
    

}
int main(){
    vector<int>V;
    int a,el,low,high,k;
    cout<<"Enter how many elements you want to enter: ";
    cin>>a;
    //taking input
    for(int i=0;i<a;i++){
        cout<<"Enter element:";
        cin>>el;
        V.push_back(el);
    }
    //taking value of k
    cout<<"Enter no of steps for rotation:";
    cin>>k;
    if(k>a){
        k=k%a;
    }
    reverse_part(V,0,a-1);
    reverse_part(V,0,k-1);
    reverse_part(V,k,a-1);    
    //printing same vector
    for(int q=0;q<a;q++){
        cout<<V[q]<<" ";
    }
    cout<<endl;
    
    





    
    
    
    return 0;
}