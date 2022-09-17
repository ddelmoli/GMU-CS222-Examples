#include <stdio.h> 
#include <stdlib.h>
int main() {
   FILE *fp;
<<<<<<< HEAD
   char name[25], buff[BUFSIZ];
   // From stdio.h: macro BUFSIZ is guaranteed to be at least 256.    
   float num;
=======
   //In stdio.h: macro BUFSIZ is guaranteed to be at least 256.     
   char name[25], buff[BUFSIZ];
   float num;

>>>>>>> 85e89076816e289ea4031c25155124a67c49768e
   if ((fp=fopen("test.txt","r")) == NULL) {
      printf("test.txt cannot be opened\n"); 
      return 1;
   }
<<<<<<< HEAD
   while(fgets(buff,sizeof(buff),fp) != NULL) {
      if (sscanf(buff,"%s %f",name,&num) == 2)
         printf("%s %.1f\n",name,num); 
      else printf("Error: line cannot be printed\n"); 
   }
=======

   while (fgets(buff,sizeof(buff),fp) != NULL) {
      if (sscanf(buff,"%s %f",name,&num)==2)
         printf("%s %.1f\n",name,num); 
      else
         printf("Error: line cannot be printed\n"); 
   }

>>>>>>> 85e89076816e289ea4031c25155124a67c49768e
   fclose(fp);
   return 0; 
}
