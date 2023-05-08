#include<stdio.h>
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}
int main(){
    //decimal to binary
    int d,final_ans,ans=0,answ=0;
    printf("ff");
    printf("Enter decimal no - ");
    scanf("%d",&d);
    
    
    while(d>1){
        ans=ans+d%2;
        ans=ans*10;
        // printf("%d",ans);
        d=d/2;
    }
    printf("gg");
    // printf("%d",ans);
    printf("g");
    // printf("\n");

    // final_ans=reverseNumber(ans);
    // printf("%d",final_ans);

    //de
    return 0;
}