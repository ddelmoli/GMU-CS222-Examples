/* strcpy() and strcat() example */ 
#include <stdio.h>
#include <string.h>

int main () {
   char final_string[80];
   char semester[6] = "Fall ";
   strcpy(final_string,"CS 222 "); 
   strcat(final_string, semester); 
   strcat(final_string,"2022"); 
   puts(final_string);
   return 0; 
}