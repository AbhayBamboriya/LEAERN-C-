#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    int len = strlen(str);
    int ans=0;
    for(int i=0;i<len;i++){
        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ans++;
            default:
                continue;

        }
    }
    printf("No of vowels in %s string is %d",str,ans);
    return 0;
}