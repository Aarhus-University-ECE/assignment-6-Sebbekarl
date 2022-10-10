#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node
{
  int data;
  struct node *next;
} node;

void add(node *head, int x)
{
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node *)malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

int size(node *l)
{
  int elements = 0;

  // loops through all elements and counts how many there are
  node *p = l;
  while (p->next != NULL)
  {
    p = p->next;
    elements++;
  }

  return elements;
}

void printout(node *l)
{
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
  node *p = l->next;
  while (p != NULL)
  {
    printf("%d, ", p->data); // prints the data at the current element
    p = p->next;             // moves through the list
  }
  printf("\n");
}

int largest(node *l)
{
  /*pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
    post: returns the largest value of the list*/
  node *p = l->next;
  int biggest_int = p->data;

  // loops through all elements to check if any of them are bigger than the first element and if so then it stores it
  while (p != NULL)
  {
    if (p->data > biggest_int)
      biggest_int = p->data;
    p = p->next;
  }

  return biggest_int;
}
