#include <stdio.h>
int main() {
    float f;
    printf("Enter a floating point number: "); 
    scanf("%f",&f);
    printf("Value = %f \n", f);
    printf("Value = %.3f \n", f);
    return 0; 
}