// Arithmetic operators 
#include <stdio.h>
int main()
{
    int a = 8, b = 3, c; float f1;
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c=a/b;
    printf("a/b = %d \n",c);
    f1=a/(float)b;
    printf("a/b = %f \n",f1);
    c=a%b;
    printf("Remainder when a divided by b = %d \n",c); 
    return 0;
}