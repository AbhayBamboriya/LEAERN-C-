#include<iostream>
using namespace std;
float area(float a){
    return 3.14*a*a;

}
int main() {
    int radius;
    cout<<"Enter Radius-:";
    cin>>radius;  
    cout<<"Area of circle is-"<<area(radius);
    return 0;                            
}