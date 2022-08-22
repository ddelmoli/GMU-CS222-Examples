#include <stdio.h> 
#include <string.h>
#define MAXSIZE 26
int main () {
   char buffer1[32];
   char greeting1[7] = {'H', 'e', 'l', 'l', 'o', ' ', '\0'}; 
   char greeting2[] = "World";
   printf("greeting1 has length: %lu \n",strlen(greeting1));    
   printf("greeting2 has length: %lu \n",strlen(greeting2));   
   printf("Greeting message 1: %s%s\n", greeting1, greeting2); 
   strcpy(buffer1,greeting1);
   strcat(buffer1,greeting2);
   printf("Greeting message 2: %s\n", buffer1);
   printf("Enter a new string:"); 
   fgets(buffer1,MAXSIZE,stdin);
   printf("New string: %s",buffer1);
   printf("length of new string: %lu \n",strlen(buffer1)); 
   return 0;
}
