#include <stdio.h> 
#include <string.h>
int main() {
<<<<<<< HEAD
    char buffer[16], *pos;

    printf("Enter string: "); 
    fgets(buffer,sizeof(buffer),stdin);
    printf("Length of %s is %lu \n",buffer,strlen(buffer));

    if ((pos=strchr(buffer, '\n')) != NULL) *pos = '\0';
    printf("Length of %s is now %lu \n",buffer,strlen(buffer));

    return(0); 
}
=======
   char buffer[16], *pos;
   printf("Enter string: ");
   fgets(buffer,sizeof(buffer),stdin);
   printf("Length of %s is %lu \n",buffer,strlen(buffer));
   if ((pos=strchr(buffer, '\n')) != NULL) 
      *pos = '\0';
   printf("Length of %s is now %lu \n",buffer,strlen(buffer));
   return 0; 
}
>>>>>>> 85e89076816e289ea4031c25155124a67c49768e
