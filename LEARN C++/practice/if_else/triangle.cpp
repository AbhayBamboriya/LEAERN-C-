#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter First side->";
    cin>>a;
    cout<<"Enter Second side->";
    cin>>b;
    cout<<"Enter Third side->";
    cin>>c;
    if (a<b+c)
    {
        if (b<a+c)
        {
            if (c<a+b)
            {
                cout<<"It is a Triangle.";
            }
            else{
            cout<<"It is not a Triangle.";
            }
            
        }
        else{
        cout<<"It is not a Triangle.";
        }
        
    }
    else{
        cout<<"It is not a Triangle.";
    }
    
   
    return 0;
}