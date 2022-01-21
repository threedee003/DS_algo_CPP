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


void Display(struct Node *p){
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}

int count(struct Node *p){
	int count = 0;
	while(p != NULL){
		count++;
		p = p->next;
	}
	return count;
}



int Delete(struct Node*p,int pos){
	struct Node *q=NULL;
	int x;
	if(pos == 1 && count(p) > 1){
		q = first;
		first = first->next;
		x = q->data;
		delete q;
		return x;
	}
	if(count(p) > pos){
		for(int i = 0; i < pos-1;i++){
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		delete p;
		return x;
	}
}



int main(){
	int A[] = {10,20,30,40,50};
	create(A,5);
	Delete(first,1);
	Display(first);
}
