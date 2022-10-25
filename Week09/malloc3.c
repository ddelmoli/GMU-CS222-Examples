#include <stdio.h> 
#include <stdlib.h> 
struct name {
   char c[30];
   int a; 
};
int main() {
   struct name *ptr; 
   int i,n; 
   printf("Enter n: "); 
   scanf("%d",&n);
   /* Allocates memory for n structures 
      with pointer ptr pointing to the base address. */ 
   ptr=(struct name*)malloc(n*sizeof(struct name));
   for (i=0; i<n; i++){
      printf("Enter string %d: ",i);
      scanf("%s",ptr[i].c); //alternative to (ptr+i)->c
      printf("Enter integer %d: ",i);
      scanf("%d", &ptr[i].a); //alternative to &(ptr+i)->a
   }
   printf("Displaying Information:\n"); 
   for (i=0;i<n;++i)
   printf("%s\t%d\t\n",(ptr+i)->c,(ptr+i)->a); 
   free(ptr); // Free up dynamically allocated memory 
   return 0;
}
