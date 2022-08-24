#include <stdio.h>

void get_students(void);
int num_stud; // Global variable

int main() {
   num_stud = 10;
   printf("The number of students is %d\n", num_stud);     
   get_students();
   printf("The number of students is %d\n", num_stud);     
   return 0;
}
void get_students(void) {
   num_stud = 12;
}
