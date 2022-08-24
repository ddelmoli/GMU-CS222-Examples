#include<stdio.h> 
#include<string.h>
struct Book {
   char title[50]; 
   char author[50]; 
   char subject[100]; 
   int book_id;
};
int main() {
   struct Book Book1; /* Declare Book1 of type Book */
   struct Book Book2; /* Declare Book2 of type Book */
   strcpy(Book1.title, "The C Programming Language"); 
   strcpy(Book1.author, "Kernighan and Ritchie"); 
   strcpy(Book1.subject, "C Programming Tutorial"); 
   Book1.book_id = 6483746;
   strcpy(Book2.title, "Advanced Programming in the UNIX Environment");  
   strcpy(Book2.author, "W. Richard Stevens (Author), Stephen A. Rago"); 
   strcpy(Book2.subject, "Unix Programming Tutorial");
   Book2.book_id = 4915700;
   printf("Book 1 title : %s\n", Book1.title);
   printf("Book 1 author : %s\n", Book1.author); 
   printf("Book 1 subject : %s\n", Book1.subject); 
   printf("Book 1 book_id : %d\n", Book1.book_id);
   printf("Book 2 title : %s\n", Book2.title);
   printf("Book 2 author : %s\n", Book2.author); 
   printf("Book 2 subject : %s\n", Book2.subject); 
   printf("Book 2 book_id : %d\n", Book2.book_id);
   return 0; 
}
