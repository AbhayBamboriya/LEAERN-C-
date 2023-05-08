#include <stdio.h>
int main(){
  int a=1234,answ,ans=0;
  while(a>0){
    answ=a%10;   //answ=4   3      2      1
    ans+=answ;   //ans=4    43     432    4321
    a=a-answ;    //a=1230    120    10    0  
    a=a/10;     //a= 123    12      1     0
    ans=ans*10; //ans=40    430    4320   43210
  }
  printf("%d",ans/10);
  return 0;

}


//a=d
//ans=final_ans