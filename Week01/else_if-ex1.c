#include <stdio.h> 
int main()
{
    char var1;
    printf("Enter Y or N: "); 
    var1 = getchar();
    if (var1 == 'Y')
        printf(" \'Y\' has been entered.\n");
    else if (var1 == 'N')
        printf(" \'N\' has been entered.\n");
    else
        printf(" \'%c\' is an illegal entry. \n", var1);
    return 0; 
}