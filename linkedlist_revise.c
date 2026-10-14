#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
} node;


int main ()
{
    node *ptr;  //the pointer that points at the first node (n1)
    node *n1 = malloc(sizeof(node));
    node *n2 = malloc(sizeof(node));
    node *n3 = malloc(sizeof(node));
    
    n1 -> num = 3;
    n2 -> num = 6;
    n3 -> num = 9;
    
    ptr = n1;
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = NULL;

    node *temp = malloc(sizeof(node));
    temp -> num = 15;
    // Add the temp node to the start
    
    ptr = temp;
    temp -> next = n1;
    while (ptr != NULL)
    {
        printf("%d\n", ptr -> num);
        ptr = ptr -> next;
    }

    return (0);
}