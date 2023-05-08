#include<iostream>
#include<vector>
using namespace std;
void dutch(vector <int>&V){
    int high=V.size()-1;
    int mid=0;
    int low=0;                        
    cout<<endl;                                          
    while(mid<=high){          
        if(V[mid]==2){            
            int temp=V[high];
            V[high]=V[mid];
            V[mid]=temp;
            high--;
            continue;

        }
        else if(V[mid]==0){
            int temp=V[low];
            V[low]=V[mid];
            V[mid]=temp;
            low++;
            mid++;
            continue;
           
        }
        else{
            mid++;
            continue;
            
        }
    }
    for(int j=0;j<V.size();j++){
        cout<<V[j]<<"  ";
    }
    
}
void by_counting(vector<int> &V){
    int noo=0,noz=0,no_of_tows=0,size;
    size=V.size();
    for (int i=0;i<size;i++){
        if(V[i]==0) noz++;
        else if(V[i]==1)  noo++;
        else   no_of_tows++;
    }
    for(int i=0;i<size;i++){
        if(noz>0){
            V[i]=0;
            noz--;
        }
        else if(noo>0){
            V[i]=1;
            noo--;
        }
        else{
             V[i]=2;
        }

    }
    for(int j=0;j<V.size();j++){
        cout<<V[j]<<"  ";
    }


}
int main(){
    vector<int>V;
    V.push_back(1);
    V.push_back(1);
    V.push_back(1);
    V.push_back(0);
    V.push_back(1);
    V.push_back(1);
    V.push_back(2);
    V.push_back(1);
    V.push_back(1);
    V.push_back(2);
    V.push_back(1);
    cout<<"PRINTING CURRENT VECTOR";
    cout<<endl;
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<"  ";
    }
    cout<<endl;
    cout<<"BY DUTCH ALGORITHM";
    dutch(V);
    cout<<endl;
    cout<<"BY GENERAL METHOD";
    cout<<endl;
    by_counting(V);
    return 0;
}