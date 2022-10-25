#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
   char file_name[25]; 
   FILE *fp;
   int ch;

   if (argc != 2) {
      printf("usage: myprog textFileName\n");
      exit(EXIT_FAILURE); 
   }

   strcpy(file_name,argv[1]);
   fp = fopen(file_name,"r"); // read mode 
   if( fp == NULL ) {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE); 
   }

   printf("The contents of %s file are :\n", file_name); 
      while( ( ch = fgetc(fp) ) != EOF )
         printf("%c",ch); 
      fclose(fp);

   return EXIT_SUCCESS;
}
