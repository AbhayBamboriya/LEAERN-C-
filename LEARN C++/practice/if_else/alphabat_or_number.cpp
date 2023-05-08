#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character--";
    cin>>ch;
    int a=int(ch);
        if((a>47 && a<58) || (a>96 && a<123) || (a>64 && a<91)){
            if(a>96 && a<123){
            cout<<ch<<" is a alphabat of small letter";
        }
        if(a>64 && a<91){
            cout<<ch<<" is a alphabat of capital letter";

        }
        if(a>47 && a<58){
            cout<<ch<<" is numerical value";
        }


    }
    else{
        cout<<"Enter valid Character";
    }
    
    return 0;
}