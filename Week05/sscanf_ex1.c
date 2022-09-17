#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int main() {
   char buff[64], dayString[16], monthString[16]; 
   int year, day;

   strcpy(buff,"Sunday Sep 19 2021");

   sscanf(buff,"%s %s %d %d", 
      &dayString[0], 
      &monthString[0], 
      &day, 
      &year 
   );

   printf("%s %d, %d is a %s\n", 
      monthString, day, year, dayString 
   );

   return 0; 
}
