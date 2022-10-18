#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) // command line arguments
{
   if (argc!=5) {
      printf("Command line Argument count != 5\n");
      return 1; 
   }

   printf("\n Program name : %s \n", argv[0]); 
   printf("1st arg : %s \n", argv[1]); 
   printf("2nd arg : %s \n", argv[2]); 
   printf("3rd arg : %s \n", argv[3]); 
   printf("4th arg : %s \n", argv[4]);

   return 0; 
}
