#include <stdio.h>

int main() {
    int num, x , remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

     x = num;

    int temp = x;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = x;

    while (temp != 0) {
        remainder = temp % 10;

        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
