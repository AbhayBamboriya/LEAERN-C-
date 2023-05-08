#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int number = 101102;
    int reversedNumber = reverseNumber(number);
    printf("Original Number: %d\n", number);
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}