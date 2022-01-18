#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

/*Search algorithm : Linear search used*/
struct Node *Search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

/*improved Linear search : Moves the searched node to head position*/

struct Node *impSearch(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
}