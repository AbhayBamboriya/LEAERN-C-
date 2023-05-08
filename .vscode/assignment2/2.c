#include<stdio.h>
#include<math.h>
int factorial(int m){
    int ans=1;
    for(int i=1;i<=m;i++){
        ans*=i;
        
    }
    return ans;
}


int main(){                         
    int term,no;
    float ans=0.0;
    printf("Enter value of x - ");
    scanf("%d",&no);
    printf("Enter no of terms - ");
    scanf("%d",&term);
   
 
    for(int i=0;i<term;i++){
        ans+=pow(no,i)/factorial(i);
    }
    printf("%f",ans);
    return 0;
}