#include<stdio.h>
int main(){
    int num;
    printf("Emter No for Factorial - ");
    scanf("%d",&num);
    int ans=1;
    for(int i=1;i<=num;i++){
        ans*=i;
        
    }
    printf("Factorial of %d is %d",num,ans);
    return 0;
}