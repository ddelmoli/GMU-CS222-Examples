#include <stdio.h> 
#include <string.h>
int main() {
   char buffer[16], *pos;
   printf("Enter string: ");
   fgets(buffer,sizeof(buffer),stdin);
   printf("Length of %s is %lu \n",buffer,strlen(buffer));
   if ((pos=strchr(buffer, '\n')) != NULL) 
      *pos = '\0';
   printf("Length of %s is now %lu \n",buffer,strlen(buffer));
   return 0; 
}
