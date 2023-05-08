#include<iostream>
using namespace std;
int main() {
    int rows,column;

    cout<<"Enter rows-";
    cin>>rows;                          //3
    cout<<"Enter column-";
    cin>>column;                        //4
    for(int i=1;i<=rows;i++){           //i=1
        for(int j=1;j<=column;j++){     ///j=1     2
            cout<<'*';                  //****
        }                               //****
        cout<<endl;                               
    }   
    return 0;
}