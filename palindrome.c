#include <stdio.h>


int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    // Reverse krenge number ko yha pe
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // yha check krenge number reverse krenge original ke equal h ya ni
    return originalNum == reversedNum;
}

int main() {
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome", num);
    } else {
        printf("%d is not a palindrome", num);
    }

    return 0;
}
