#include <stdio.h>
int main()
{
   int num;
   printf("Please enter 1,5, or 10: "); 
   scanf("%d",&num);
   switch(num) {
      case 1:
         printf("Value is: %d\n", num); 
         break;
      case 5:
         printf("Value is: %d\n", num); 
         break;
      case 10:
         printf("Value is: %d\n", num); 
         break;
      default:
         printf("%d is an illegal entry\n", num);
   }
   return 0; 
}