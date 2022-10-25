#include <stdio.h> 
#include <ctype.h> 
#include <string.h>
int main() {
   char str[] = "GMU 4400 University Drive";
   int alpha=0, num=0, space=0, count, lc=0, uc=0;
   for (count=0; str[count]!='\0'; count++) {
      if (isalpha(str[count]) != 0) {
         alpha++;
         if (islower(str[count]) != 0) lc++;
            else uc++;
      } else if (isdigit(str[count]) != 0)
         num++;
      else if (isspace(str[count]) != 0)
         space++; 
      printf("%c",toupper(str[count]));
   }
   printf("\n");
   printf("%s contains %lu characters\n",str,strlen(str));    
   printf("Alphabetic characters: %d\n", alpha); 
   printf("\t Upper case: %d\n", uc);
   printf("\t Lower case: %d\n", lc);
   printf("Integers: %d\n", num);
   printf("Spaces: %d\n", space);
   return 0;
}
