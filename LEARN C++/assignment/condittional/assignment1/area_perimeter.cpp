#include<iostream>
using namespace std;
int main(){
    float r,area,perimeter;
    cout<<"Enter Radius-";
    cin>>r;
    area=3.14*r*r;
    perimeter=2*3.14*r;
    if(area>perimeter){
        cout<<area<<endl<<perimeter<<endl<<"Area is greatest.";
    }
    else{
        cout<<area<<endl<<perimeter<<endl<<"Perimeter is greatest.";
    }
    return 0;
}