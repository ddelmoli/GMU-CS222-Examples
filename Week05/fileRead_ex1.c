#include<stdio.h> 
#define MAX_LEN 100
int main() {
   FILE *filePtr;
   char file_name[32], buf[512];

   printf("Enter a text file name:");    
   scanf("%s",file_name);

   filePtr = fopen(file_name,"r");
   if (filePtr == NULL) {
      printf("Error opening file:%s\n",file_name);    
      return 1;
   }

   while (fgets(buf, MAX_LEN, filePtr)!= NULL)
      printf("%s",buf);

   fclose(filePtr);
   return 0; 
}
