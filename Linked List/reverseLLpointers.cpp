#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	struct Node *next;
}*first;



void create(int A[], int n){
	struct Node *temp;
	struct Node *last;
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for(int i = 1; i < n; i++){
		temp = new Node;
		temp->data = A[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
}



void Display(struct Node *p){
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}


void reverseLL(struct Node *p){
	p = first;
	struct Node *q = NULL;
	struct Node *r = NULL;
	while(p != NULL){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}


int main(){
	int A[] = {12,23,15,23,45};
	create(A,5);
	reverseLL(first);
	Display(first);
}