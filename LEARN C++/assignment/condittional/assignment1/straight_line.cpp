#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    cout<<"Enter Coordinate of first point"<<endl;
    cout<<"Enter x coordiante-";
    cin>>a;
    cout<<"Enter y coordiante-";
    cin>>b;
    cout<<"Enter Coordinate of second point";
    cout<<"Enter x coordiante-";
    cin>>c;
    cout<<"Enter y coordiante-";
    cin>>d;
    cout<<"Enter Coordinate of third point"<<endl;
    cout<<"Enter x coordiante-";
    cin>>e;
    cout<<"Enter y coordiante-";
    cin>>f;
    int slope1,slope2;
    slope1=(c-a)/(d-b);
    slope2=(e-c)/(f-d);
    if (slope1==slope2){
        cout<<"All 3 points are in same line";
    }
    else{
        cout<<"All 3 points are not in same line";
    }
    
    
    return 0;
}