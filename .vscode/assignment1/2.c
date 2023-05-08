#include<stdio.h>
int main(){
    int num;
    printf("Enter Your No- ");
    scanf("%d",&num);
    if(num>=90){
        printf("Your grade is A");
    }
    else if(num>=70 && num<90){
        printf("Your grade is B");

    }
    else if(num>=50 && num<70){
        printf("Your grade is C");

    }
    else{
        printf("Your grade is F");
    }
    return 0;
}