#include <stdio.h> 
#include <stdlib.h> // contains protoype for atoi()
#include <string.h>
int main () {
   int i,c;
   char buffer[256];

   printf("Enter a number: "); 
   fgets(buffer, 256, stdin);
   for (c = 0; buffer[c] != '\n'; c++) {
      printf("buffer[%d] = %c and is stored at address %p \n",c,buffer[c],&buffer[c]);
      printf("The character: %c has ascii value: %d\n",buffer[c],buffer[c]); 
   }
   i = atoi (buffer); 
   printf("Integer i = %d.\n",i);
   printf("Enter another number: "); 
   fgets(buffer, 256, stdin);
   for (c = 0; buffer[c] != '\n'; c++)
      printf("buffer[%d] now equals %c and is still stored at address %p\n",c,buffer[c],&buffer[c]);
   sscanf(buffer,"%d",&i);
   printf("Integer i now equals %d.\n",i); 
   return 0;
}
