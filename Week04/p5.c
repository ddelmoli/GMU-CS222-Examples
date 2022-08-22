#include <stdio.h> 
#include <string.h> 
int main() {
   char stringBuffer[] = "CS222"; 
   char* ptr;
   int len;
   len = 0;
   ptr = stringBuffer; // could also be written as ptr = &stringBuffer[0]
   while (len <= strlen(stringBuffer)) {
      printf("%d %c %d %p\n",len, *ptr, *ptr, ptr);
      ptr++;
      len++;
   }
   return 0; 
}
