#include <stdio.h>
int main() { 
   int* p1; 
   int i; 
   i=30;
   printf("Address of i:%p\n",&i);    
   printf("Value of i:%d\n\n",i);
   p1=&i;
   printf("Address stored in pointer p1:%p\n",p1); 
   printf("Content of pointer p1:%d\n\n",*p1);
   i=20;
   printf("Address stored in pointer p1:%p\n",p1);    
   printf("Content of pointer p1:%d\n\n",*p1);
   *p1=10;
   printf("Address of i:%p\n ",&i); 
   printf("Value of i:%d\n\n",i);
   return 0; 
}
