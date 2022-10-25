#include <stdio.h>
int main(){
   char str[4];
   int i; 
   for (i=0;i<4;++i) {
      printf("Address of str[%d]=%p\n",i,&str[i]); 
   }
   return 0; 
}
