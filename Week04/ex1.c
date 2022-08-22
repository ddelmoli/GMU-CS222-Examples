#include <stdio.h> 
int main() {
   char ar[8]="C2"; 
   int i;
   for (i=0; ar[i]!='\0'; i++)
      printf("%c %d %x\n",ar[i],ar[i],ar[i]);
   return 0; 
}