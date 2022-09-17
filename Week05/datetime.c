#include <stdio.h> 
#include <time.h>

char *getDateAndTime();

int main() {
   printf("Today's date and time : %s\n",getDateAndTime());
   return 0; 
}

char *getDateAndTime() {
   time_t t; 
   time(&t);
   return ctime(&t);
}
