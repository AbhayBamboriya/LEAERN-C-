#include<iostream>
using namespace std;
int main(){
    float length,breadth,area,perimeter;
    cout<<"Enter length-";
    cin>>length;
    cout<<"Enter breadth-";
    cin>>breadth;
    area=length*breadth;
    perimeter=2*(breadth+length);
    if(area>perimeter){
        cout<<"Area is Greater than Perimeter";
    }
    else{
        cout<<"Perimeter is Greater than Area";
    }
    return 0;
}