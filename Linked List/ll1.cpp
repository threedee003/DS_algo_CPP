#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}




void RecursiveDisplay(struct Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);
        cout << p->data;
    }
}

int Count(struct Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}



int main()
{
    struct Node *temp;
    int A[] = {7, 1, 44, 55, 65, 100, 21};
    create(A, 7);

    Display(first);

    return 0;
}
