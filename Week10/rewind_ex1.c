#include <stdio.h> 
#include <stdlib.h> 

#define BUFF_SIZE 50

int main() {
   FILE *ipAddresses;
   int counter;
   char continu = 'y';
   char buff[50];

   ipAddresses = fopen("CS222_Inet.txt", "r");    
   if (!ipAddresses) exit(1);

   while (continu == 'y') { 
      counter = 0;
      while(fgets(buff, BUFF_SIZE, ipAddresses) != NULL) { 
         printf("%s",buff);
         counter++; 
      }
      printf("\n%d records read. Redisplay file? (y,n)",counter); 
      scanf(" %c",&continu);
      getchar(); // To consume the newline

      if (continu == 'y')
         rewind(ipAddresses); 
   }
   
   return 0; 
}
