#include<iostream>
using namespace std;
int function(int a){
    return a*a;

}
int main() {
    int number;
    cout<<"Enter No-:";
    cin>>number;  
    for(int i=1;i<=number;i++)   {           
       cout<<function(i)<<endl;
    }
    return 0;                            
}