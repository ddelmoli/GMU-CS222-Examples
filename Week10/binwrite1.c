#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

struct sampleData {
   int n1, n2, n3; 
};

int main() {
   int i;
   struct sampleData data; 
   FILE *fptr;

   if ((fptr = fopen("CS222_ex2.bin","wb")) == NULL) {    
      printf("Unable to open file: CS222_ex2.bin\n");
      exit(1); 
   }

   for (i=1; i<5; i++) {
      data.n1 = i;
      data.n2 = i*i;
      data.n3 = pow(i,3);;
      fwrite(&data, sizeof(struct sampleData), 1, fptr);
   }

   fclose(fptr);
   return 0; 
}