#include<iostream>
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


void insert(struct Node *p, int x, int pos){
	struct Node *temp = new Node;
	temp->data = x;
	p = first;
	for(int i = 0; i < pos-1; i++){
		p = p->next;
	}
	temp->next = p->next;
	p->next = temp;
}



void Display(struct Node *p){
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}



int main(){
	int A[] = {2,33,5,10,50};
	create(A,5);
	insert(first,45,2);
	Display(first);
}