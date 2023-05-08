#include <stdio.h>
int main() {
    int num, i, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = num / 1000;
    for (int j = 0; j < i; j++) {
        printf("M");
    }
    num = num % 1000;
i = num / 100;
    if (i == 9) {
        printf("CM");
    } else if (i >= 5) {
        printf("D");
        for (int j = 0; j < i-5; j++) {
            printf("C");
        }
    } else if (i == 4) {
        printf("CD");
    } else {
        for (int j = 0; j < i; j++) {
            printf("C"); }
    }
    num = num % 100;
    i = num / 10;
    if (i == 9) {
        printf("XC");
    } else if (i >= 5) {
        printf("L");
        for (int j = 0; j < i-5; j++) {
            printf("X");
        }
    } else if (i == 4) {
        printf("XL");
    } else {
        for (int j = 0; j < i; j++) {
            printf("X");}
    }
    num = num % 10;
    i = num;
    if (i == 9) {
        printf("IX");
    } else if (i >= 5) {
        printf("V");
        for (int j = 0; j < i-5; j++) {
            printf("I");}
    } else if (i == 4) {
        printf("IV");
    } else {
        for (int j = 0; j < i; j++) {
            printf("I");}
    }
    return 0;
}
