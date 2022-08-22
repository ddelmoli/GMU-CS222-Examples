#include <stdio.h> 
int main() {
   char ch;
   printf("Enter a character: ");
   scanf("%c", &ch);
   // recall: %d may be used to display the integer value of a character 
   printf("ASCII value of %c = %d Decimal\n", ch, ch);
   printf("ASCII value of %c = %x Hex\n", ch, ch);
   printf("ASCII value of %c = %o Octal\n", ch, ch);
   return 0;
}