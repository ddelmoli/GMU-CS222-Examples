#include <stdio.h>
int main (int argc, char *argv[]) {
   int i=0;
   printf("\ncommand line arg count = %d", argc);

   /* First argument is executable name only */     
   printf("\nProgram name=%s", argv[0]);
   for (i=1; i< argc; i++) {
      printf("\ncommand line arg %d = %s", i, argv[i]); 
   }
   printf("\n"); 
   return 0;
}