#include <stdio.h>
int main() {
   int n,m;
   printf("Enter an integer\n"); 
   scanf("%d", &n);
   m = (n/2)*2; 
   if (m == n)
      printf("Even\n"); 
   else {
      printf("(%d/2) * 2 = %d\n",n,m);
      printf("Odd\n"); 
   }
   return 0; 
}
