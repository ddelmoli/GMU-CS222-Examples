#include <stdio.h> 
#include <stdlib.h>
int main(int argc, char * argv[]) { 
   int i, sum = 0;
   if (argc != 3) {
      printf("usage: myprog integer1 integer2.");
      exit(1); 
   }

   printf("The sum is : ");
   for (i = 1; i < argc; i++)
      sum = sum + atoi(argv[i]);
   
   printf("%d\n", sum);
   return 0; 
}
