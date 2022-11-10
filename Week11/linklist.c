#include <stdio.h> 
#include <stdlib.h>

struct node { 
   int data;
   struct node *next; 
};

struct node *head = NULL;

//display the list 
void printList() {
   struct node *ptr = head;
   printf("\nhead:");
   // start at the beginning of the list 
   while (ptr != NULL) {
      printf("node addr:%p \tdata:%d \tnext addr:%p\n",
             ptr, ptr->data, ptr->next);
      ptr = ptr->next; 
   }
   printf(" [null]\n"); 
}

// program continued...
// insert link at the beginning of the list 

void insert (int data) {
   // create a new link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->data = data;  // *link.data
   link->next = head;  // *link.next
   head = link;
}

int main() { 
   insert(15); 
   insert(2);
   /*
   insert(33); 
   insert(5); 
   insert(75); 
   insert(13);
   */
   printList(); 
   return 0;
}
