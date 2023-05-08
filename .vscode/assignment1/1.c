#include<stdio.h>
int main(){
    printf("Enter 3-digit no - ");
    int num,sum=0,m,a;
    scanf("%d",&num);
    if(num>99 && num<1000){
        m=num;
        for(int i=0;i<3;i++){
            a=num%10;
            num=num-a;
            num=num/10;
            sum+=a;
        }
     
        printf("Sum of 3-digit is - ");
        printf("%d",sum);
        
        
        m=m/10;
        m=m%10;
        printf("\n");
        printf("Sum of First and last digit is - ");
        printf("%d",sum-m);
     
    }
  
    else{
        printf("Enter 3-digit number Only!!!");
    }
    
    return 0;
}