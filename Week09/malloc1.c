#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int main() {
   char name[64]; 
   char *description;
   strcpy(name, "Dominic Delmolino");
   /* allocate memory dynamically */ 
   description = malloc( 200 * sizeof(char) ); 
   if ( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
      return 1; 
   } else {
      strcpy( description, "CS 222: Computer Programming for Engineers"); 
   }
   printf("Name = %s\n", name ); 
   printf("Description: %s\n", description ); 
   free(description);
   return 0;  
}
