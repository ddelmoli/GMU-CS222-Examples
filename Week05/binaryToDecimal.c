#include <stdio.h>
#include <math.h>
long binaryToDecimal(long n);

int main() {
   long binary;
   printf("Enter a binary number\n"); 
   scanf("%ld", &binary);
   printf("Decimal number of %ld is %ld\n", binary, binaryToDecimal(binary)); 
   return 0;
}

/* Function to convert a binary number to decimal number */
long binaryToDecimal(long n) { 
   int remainder;
   long decimal=0, i=0;
   
   while (n != 0) {
      remainder = n%10;
      n = n/10;
      decimal = decimal + (remainder*pow(2,i)); 
      ++i;
   }
   return decimal; 
}
