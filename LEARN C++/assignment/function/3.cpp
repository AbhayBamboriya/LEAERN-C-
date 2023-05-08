#include<iostream>
using namespace std;
int count(int b){
    int d=0;
    while(b>0){
        int l=b%10;
        b=b-l;
        b/=10;
        d++;
        

    }
    return d;

}
int square(int a){
    return a*a;

}
int main() {
    cout<<"Enter no-";
    int n;
    cin>>n;
    cout<<"No of digits are "<<count(n)<<endl;
    cout<<"Square of no "<<square(n);
    return 0;                            
}