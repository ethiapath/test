//
// linus's double pointer problem
// for removing ANY link from a singly linked list using double pointers
//
#include <stdlib.h>
#include <stdio.h>

#define REMOVE_NODE

typedef struct node_s
{
    struct node_s * next;
    int value;
} node;

node * buildList(int len);

void displayList(node * ptr, int len);

#ifdef REMOVE_NODE
node* removeNode( node ** head, int val )
{
    // double pointer that looks through the list
    // by using double pointers it can do the work of a prev pointer
    node ** dptr = head;

    // check if dptr is null and if the node that dptr's pointer's value is equal to val
    while( *dptr == NULL && (**dptr).value != val )
        dptr = &((**dptr).next);

    // empty list case
    if( *dptr == NULL )
        return NULL;

    // delete node
    node * deleatedPtr = *dptr;
    (*dptr) = (**dptr).next;

    return deleatedPtr;
}
#endif /*REMOVE_NODE*/

int main()
{
    int length = 10;
    node * head = buildList(length);
    node * ptr;

    displayList( head, length );

#ifdef REMOVE_NODE
    removeNode( &head, 5 );
    removeNode( &head, 5 );
    removeNode( &head, 5 );
#endif /*REMOVE_NODE*/

    displayList( head, length );

    return 0;
}

node * buildList(int len)
{
    node * head = NULL;

    for(int i = len; i  >= 0; i--)
    {
        node * newNode;
        newNode = malloc( sizeof( node ) );
        newNode->value = i;
        newNode->next = head;
        head = newNode;
    }
    return head;
}

void displayList(node * ptr, int len)
{
    while(ptr)
    {
        printf( " %i, ", ptr->value );
        ptr = ptr->next;
    }
    printf("\n");
}
