#include <stdio.h> 
#include <stdlib.h>

struct sampleData {
   int n1, n2, n3;
};

int main() {
   int i;
   int rr = 0;
   struct sampleData data[3]; 
   FILE *fptr;

   if ((fptr = fopen("CS222_ex2.bin","rb")) == NULL) {  
      printf("Unable to open file:CS222_ex2.bin\n");
      exit(1); 
   }

   rr = fread(data, 10 * sizeof(struct sampleData), 1, fptr);  
   printf("Records read %d\n", rr);

   for (i=0; i<3; i++) 
      printf("n1:%d\tn2:%d\tn3:%d\n", data[i].n1, data[i].n2, data[i].n3);

   fclose(fptr);
   return 0; 
}
