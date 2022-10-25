#include <stdio.h> 
#include <stdlib.h>
int main() {
   struct st {
      int x,y; 
   };
   int i;
   struct st *st_ptr;
   st_ptr = (struct st *) malloc(10 * sizeof(struct st));
   for (i=0; i<10; i++)
   {
      st_ptr[i].x = i * 5;   /* note: st_ptr[i] is the same as *(st_ptr + i) */
      st_ptr[i].y = i * 10;
   }
   for (i=0; i<10; i++)
   {
      printf("\t%d ",st_ptr[i].x);
      printf("\t%d \n\n ",st_ptr[i].y); 
   }
   return 0; 
}
