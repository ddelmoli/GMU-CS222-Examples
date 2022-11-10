#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int n;
    struct node *next;
} node_t;

void addValue(node_t **p_head, int p_n);
void removeValue(node_t **p_head, int p_n);
int listSize(node_t *p_head);
void printList(node_t *p_head);

int main() {
    node_t *head = NULL; // initialize an empty list

    printf("Starting out, list size is %d\n",listSize(head));
    printf("Adding 1\n");
    addValue(&head, 1);
    printList(head);
    printf("Adding 5\n");
    addValue(&head, 5);
    printList(head);
    printf("Adding 2\n");
    addValue(&head, 2);
    printf("Adding 6\n");
    addValue(&head, 6);
    printf("Adding 0\n");
    addValue(&head, 0);
    printf("Adding 4\n");
    addValue(&head, 4);
    printList(head);
    printf("Removing 0\n");
    removeValue(&head, 0);
    printList(head);
    printf("Removing 6\n");
    removeValue(&head, 6);
    printList(head);
    printf("Removing -1\n");
    removeValue(&head, -1);
    printList(head);
    printf("Removing 3\n");
    removeValue(&head, 3);
    printList(head);
    printf("Removing 4\n");
    removeValue(&head, 4);
    printList(head);
    return 0;
}

int listSize(node_t *p_head) {
    int retval = 0;
    node_t *curnode;
    curnode = p_head;
    while (curnode != NULL) {
        retval++;
        curnode = curnode->next;
    }
    return retval;
} 

void printList(node_t *p_head) {
    int i = 0;
    node_t *curnode;
    curnode = p_head;
    if (p_head != NULL) {
        do {
            printf("Node %d value is %d\n", i, curnode->n);
            curnode = curnode->next;
            i++;
        } while (curnode != NULL);
    }
}

void addValue(node_t **p_head, int p_n) {
    node_t *newnode, *curnode, *prevnode;
    newnode = (node_t*) malloc(sizeof(node_t));
    newnode->n = p_n;
    newnode->next = NULL;
    curnode = *p_head;
    prevnode = *p_head;
    if (curnode == NULL) {
        *p_head = newnode;
    } else if (curnode->n > p_n) {
        newnode->next = *p_head;
        *p_head = newnode;
    } else {
        while (curnode->n < p_n && curnode->next != NULL) {
            prevnode = curnode;
            curnode = curnode->next;
        }
        if (curnode->n < p_n && curnode->next == NULL) 
            curnode->next = newnode;
        else {
            prevnode->next = newnode;
            newnode->next = curnode;
        }
    }
}

void removeValue(node_t **p_head, int p_n) {
    node_t *curnode, *prevnode;
    curnode = *p_head;
    if (curnode != NULL) {
        while (curnode->n < p_n && curnode->next != NULL) {
            prevnode = curnode;
            curnode = curnode->next;
        }
        if (curnode->n == p_n) {
            if (curnode == *p_head) 
                *p_head = curnode->next;
            else
                prevnode->next = curnode->next;
            free(curnode);
        }
    }
}