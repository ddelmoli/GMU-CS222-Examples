#include <stdio.h>
#include <string.h>

int main() {
   char buffer[26]; 
   int length;
   printf("Enter string: ");    
   fgets(buffer,sizeof(buffer),stdin);
   length = strlen(buffer);
   printf("Length of %s is %d \n",buffer,length);
   return 0; 
}