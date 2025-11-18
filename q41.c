#include<stdio.h>
#include <math.h>

int main() {
    int num, temp, firstDigit, lastDigit, digits = 0;
    int swappedNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    temp = num;
    lastDigit = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    int middlePart = num % (int)pow(10, digits);
    middlePart /= 10;                           

    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
