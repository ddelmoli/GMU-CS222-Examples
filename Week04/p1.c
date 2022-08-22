#include <stdio.h> 
int main() {

   int var1 = 10; // var1 is an integer variable
   int *p1;       // p1 is a pointer to an integer
   p1 = &var1;    // set p1 to the address of the var1 integer variable

   printf ( "p1 is now referencing var1 \n");
   printf ( "The value stored in var1 is: %d \n", var1);
   printf ( "The address of var1 is: %p \n", &var1);
   printf ( "i.e. The value (address) stored in pointer variable p1 is: %p \n", p1);    
   printf ( "The value dereferenced by p1 is: %d \n", *p1);
   return 0; 
}