#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
<<<<<<< HEAD

=======
>>>>>>> 85e89076816e289ea4031c25155124a67c49768e
int main() {
   char buff[64], dayString[16], monthString[16]; 
   int year, day;

<<<<<<< HEAD
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
=======
   strcpy(buff, "Sunday Sep 19 2021" );
   sscanf( buff, "%s %s %d %d", 
      dayString, monthString, &day, &year );

   printf("%s %d, %d is a %s\n", 
      monthString, day, year, dayString );
>>>>>>> 85e89076816e289ea4031c25155124a67c49768e

   return 0; 
}
