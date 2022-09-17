#include <stdio.h> 
int main() {
   FILE *sfp, *dfp;
   char sfname[32],dfname[32], text[132];
   
   printf("Enter source file name:");    
   scanf("%s",sfname);
   sfp = fopen(sfname,"r");
   if (sfp == NULL) {
      printf("Error opening source file:%s",sfname);
      return(1); 
   }
   
   printf("Enter destination file name:");    
   scanf("%s",dfname);
   dfp = fopen(dfname,"w");
   if (dfp == NULL) {
      printf("Error opening destination file:%s",dfname);
      return(1); 
   }
   
   while(fgets(text, sizeof(text), sfp) != NULL)    
      fprintf(dfp, "%s", text);
   
   printf("File: %s has been copied to %s\n\n",sfname,dfname);
   fclose(sfp); 
   fclose(dfp); 
   return 0;
}
