#include <stdio.h>
#define SIZE 6

void showarray(int array[]);

int main() {
   int n[] = { 1, 2, 3, 4, 9, 10 };
   puts("Displaying the array:");
   showarray(n); //array as function parameter   
   return 0;
}

void showarray(int array[]) {
   int x;
   for (x=0; x<SIZE; x++) 
      printf("%d\t",array[x]);
   putchar('\n'); 
}
