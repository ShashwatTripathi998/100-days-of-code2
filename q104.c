#include <stdio.h>
#include <math.h>
int main() {
    int n;
        printf("Enter a positive integer n: ");
            scanf("%d", &n);
                int pivot = -1;
                    long long totalSum = (long long)n * (n + 1) / 2;
                        long long root = (long long)sqrt(totalSum);
                            if (root * root == totalSum) {
                                    pivot = (int)root;
                                        }
                                            printf("Pivot integer = %d\n", pivot);
                                                return 0;
                                                }