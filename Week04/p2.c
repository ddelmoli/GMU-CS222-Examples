#include <stdio.h> 
int main()
{
    float a=25.5;  // variable declaration
    float *p;      // pointer variable declaration
    p=&a;          // store address of variable a in pointer p

    printf("Value stored in variable a:%f\n", a);
    printf("Address of variable a:%p\n", &a);
    printf("Address stored in pointer variable p is:%p\n", p); // accessing the address
    printf("pointer variable p dereferenced:%f\n", *p);        // accessing the value
    return 0;
}