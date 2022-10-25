#include <stdio.h> 
int main() {
   int int_array[4]; 
   int i; 
   for (i=0;i<4;++i) {
      printf("Address of int_array[%d]=%p\n",i,&int_array[i]); 
   }
   return 0; 
}