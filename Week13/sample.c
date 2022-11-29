#include <stdio.h>

/* sample.c */
int getint(void); /* Prompts the user to enter an integer. Return the integer. */
int getmax(int a, int b, int c); /* Returns the value of the largest of three integers. */

/* Main program: Using the various functions */ 
int main (void) {
   int x, y, z;
   x = getint();
   y = getint();
   z = getint();
   printf("The largest of %d, %d, and %d is %d\n", x, y, z, getmax(x,y,z));
}

int getint(void) { 
   int a;
   printf("Please enter an integer > "); 
   scanf("%d", &a);
   return(a);
}

int getmax(int a, int b, int c) { 
   int m = a;
   if (m<b) m = b; 
   if (m<c) m = c; 
   return(m);
}
