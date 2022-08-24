#include <stdio.h>
int a = 5;

int main() {
   printf("1. a = %d\n",a);
   int a = 10;
   printf("2. a = %d\n",a);
   {
      printf("3. a = %d\n",a);
      int a = 15;
      printf("4. a = %d\n",a);
   }
   printf("5. a = %d\n",a);
   return 0;
}
