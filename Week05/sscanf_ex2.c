#include <stdio.h> 
#include <stdlib.h>
int main() {
   FILE *fp;
   //In stdio.h: macro BUFSIZ is guaranteed to be at least 256.     
   char name[25], buff[BUFSIZ];
   float num;

   if ((fp=fopen("test.txt","r")) == NULL) {
      printf("test.txt cannot be opened\n"); 
      return 1;
   }

   while (fgets(buff,sizeof(buff),fp) != NULL) {
      if (sscanf(buff,"%s %f",name,&num)==2)
         printf("%s %.1f\n",name,num); 
      else
         printf("Error: line cannot be printed\n"); 
   }

   fclose(fp);
   return 0; 
}
