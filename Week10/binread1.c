#include <stdio.h> 
#include <stdlib.h>

struct sampleData {
   int n1, n2, n3;
};

int main() {
   int n;
   struct sampleData data; 
   FILE *fptr;

   if ((fptr = fopen("CS222_ex2.bin","rb")) == NULL) {  
      printf("Unable to open file:CS222_ex2.bin\n");
      exit(1); 
   }

   for (n=3; n>=0; n--) {
      fseek(fptr, n * sizeof(struct sampleData), SEEK_SET);    
      fread(&data, sizeof(struct sampleData), 1, fptr);  
      printf("n1:%d\tn2:%d\tn3:%d\n", data.n1, data.n2, data.n3);
   }

   fclose(fptr);
   return 0; 
}
