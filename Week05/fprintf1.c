#include <stdio.h> 
int main() {
   FILE *ptr_file; 
   int x;

   /* Open file for writing, make sure we succeed */
   ptr_file=fopen("CS222_ex1.txt", "w");
   if (!ptr_file) return 1;

   /* Write 10 digits to file */
   for (x=1; x<=10; x++) fprintf(ptr_file,"%d\n", x);

   /* Close file */
   fclose(ptr_file);
   return 0; 
}
