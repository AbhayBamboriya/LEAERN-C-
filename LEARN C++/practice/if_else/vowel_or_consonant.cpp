#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Alphabat--";
    cin>>ch;
    int a=int(ch);
    if((a>96 && a<123) || (a>64 && a<91)){
        if (ch=='a' || ch=='A' ||ch=='e' ||ch=='E' ||ch=='i' ||ch=='I' ||ch=='o' ||ch=='O' ||ch=='u' ||ch=='U'){
            cout<<ch<<" is a vowel.";
        }
        else{
            cout<<ch<<" is a consonant.";
        }
    }
    else{
        cout<<"Enter Valid Alphabat.";
    }
    return 0;

}