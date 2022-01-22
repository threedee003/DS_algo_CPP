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




void removeDuplicates(struct Node*q){
	struct Node *p = first->next;
	q = first;
	while(p != NULL){
		if(q->data != p->data){
			q = p;
			p = p->next;
		}
		else{
			q->next = p->next;
			delete p;
			p = q->next;
		}
	}
}


int main(){
	int A[] = {11,11,11,22,22,55,45,45,66,66};
	create(A,10);
	removeDuplicates(first);
	Display(first);
}



