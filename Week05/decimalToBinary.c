#include <stdio.h>
int main() {
   int decNumber, quotient; 
   int binNumber[100], i=1, j;

   printf("Enter any decimal number: ");    
   scanf("%d",&decNumber);
   quotient = decNumber; 
   while (quotient!=0) {
      binNumber[i++]= quotient % 2;
      quotient = quotient / 2; 
   }

   printf("Decimal: %d = Binary: ",decNumber);
   for(j = i-1; j>0; j--) 
      printf("%d",binNumber[j]);

   printf("\n");
   return 0; 
}
