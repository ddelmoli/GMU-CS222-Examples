#include <stdio.h> 
#include <string.h>
void decimalToString(int decValue, char decString[]);

int main() {
   int value;
   char valueString[32];
   printf("Enter an integer: "); 
   scanf("%d",&value);
   decimalToString(value,valueString);
   printf("Result: %s length: %lu\n",valueString,strlen(valueString));    
   return 0;
}

void decimalToString(int decValue, char decString[]) {
   sprintf(decString,"%d",decValue); 
}
