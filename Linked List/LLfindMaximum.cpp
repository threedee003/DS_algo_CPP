#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;

void Create(int A[], int n)
{
    int i = 0;
    struct Node *temp;
    struct Node *last;
    first = new Node;
    first->data = A[i];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int Max(struct Node *p)
{
    int max = 0;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int main()
{
    int A[] = {11, 554, 120, 564, 10, 154};
    Create(A, 6);
    cout << Max(first);
}