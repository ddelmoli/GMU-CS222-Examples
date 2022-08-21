#include <stdio.h>
int main() {
    int n, x, sum = 0;
    printf("Enter an integer [1,999999]\n");
    scanf("%d", &n);
    if ((n > 1) && (n < 999999)) {
        for (x=0; x<n; x++) {
            if ((x%3 == 0) || (x%5 == 0)) {
                printf("%d\n", x);
                sum += x;
            }
        }
        printf("Sum of all multiples of 3 or 5 is %d\n", sum);
    }
    else {
        printf("Number out of range\n");
    }
}