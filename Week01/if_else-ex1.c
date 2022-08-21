#include <stdio.h> 
int main()
{
    double pi;
    printf("Enter 3.14159: "); 
    scanf("%lf",&pi);
    if (pi == 3.14159)
        printf(" 3.14159 has been entered.\n");
    else
        printf(" %lf is an illegal value\n", pi);
    return 0; 
}