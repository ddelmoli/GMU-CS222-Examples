#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) { 
   char ipv4_buffer[16], *str;
   int value[4] = {0,0,0,0}, index = 0;

   strcpy(ipv4_buffer,argv[1]); 
   str = ipv4_buffer;
   while (*str) {
      if (isdigit(*str)) {
         value[index] *= 10;
         value[index] += *str - '0'; 
      } else {
         index++; 
      }
      str++; 
   }

   for (int i=0; i<4; i++)
      printf("value[%d] = %d\n",i,value[i]);

   return 0; 
}
