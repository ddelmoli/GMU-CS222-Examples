// Program indicates whether an integer is negative 
#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer: "); 
    scanf("%d", &number);
    // Is number negative? 
    if (number < 0)
    {
        printf("%d is negative.\n", number); 
    }
    else 
    {
        printf("%d is not negative\n", number); 
    }
    return 0; 
}