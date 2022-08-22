#include <stdio.h>
int main() {
   int x,y;
   int *p1; /* p1 points to an integer */
   p1=&x;
   *p1=5;
   y=x;
   printf("%d %d %d %p\n", x, y, *p1, p1);
   return 0; 
}
