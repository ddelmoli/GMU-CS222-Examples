#include <stdio.h> 

void foo(int x);

int main() {
   int x ;
   x = 42 ;
   printf("Before calling foo: x = %d\n", x);
   foo(x) ;
   printf("After calling foo: x = %d\n", x); 
   return 0;
}

void foo(int x) {
   x = 101 ;
   printf("Inside foo: x = %d\n", x ); 
}

