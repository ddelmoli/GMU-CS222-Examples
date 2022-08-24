#include<stdio.h>
int main() {
    int x;
    x = 5;
    {
        int x;
        x = 10;
        printf("x = %d\n", x);
    }
    printf("x = %d\n", x);
}