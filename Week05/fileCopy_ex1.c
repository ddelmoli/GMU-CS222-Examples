#include <stdio.h> 
int main() {
   FILE *sfp, *dfp;
<<<<<<< HEAD
   char sfname[32],dfname[32], text[132];
   
   printf("Enter source file name:");    
=======
   char sfname[32], dfname[32], text[132];

   printf("Enter source file name:"); 
>>>>>>> 85e89076816e289ea4031c25155124a67c49768e
   scanf("%s",sfname);
   sfp = fopen(sfname,"r");
   if (sfp == NULL) {
      printf("Error opening source file:%s",sfname);
<<<<<<< HEAD
      return(1); 
   }
   
=======
      return 1; 
   }

>>>>>>> 85e89076816e289ea4031c25155124a67c49768e
   printf("Enter destination file name:");    
   scanf("%s",dfname);
   dfp = fopen(dfname,"w");
   if (dfp == NULL) {
      printf("Error opening destination file:%s",dfname);
<<<<<<< HEAD
      return(1); 
   }
   
   while(fgets(text, sizeof(text), sfp) != NULL)    
      fprintf(dfp, "%s", text);
   
   printf("File: %s has been copied to %s\n\n",sfname,dfname);
=======
      return 1; 
   }

   while(fgets(text, sizeof(text), sfp) != NULL) 
      fprintf(dfp, "%s", text);

   printf("File: %s had been copied to %s\n\n",sfname,dfname);
>>>>>>> 85e89076816e289ea4031c25155124a67c49768e
   fclose(sfp); 
   fclose(dfp); 
   return 0;
}
