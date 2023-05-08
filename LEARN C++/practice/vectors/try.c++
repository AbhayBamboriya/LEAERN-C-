#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v(4,5);
    // cout<<v[0]<<endl;
    //  cout<<v[1]<<endl;
    //   cout<<v[2]<<endl;
    //    cout<<v[3]<<endl;
    //     cout<<v[4]<<endl;


    vector<vector<int>>V(4,v);
    cout<<V[0][0]<<endl;
    return 0;
}