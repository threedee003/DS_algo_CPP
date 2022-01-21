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


int count(struct Node *p){
	int count = 0;
	while(p != NULL){
		count++;
		p = p->next;
	}
	return count;
}

/*
 In this method the elements of the linked list are stored in an array and while traversing the linked list the elements are
assigned to nodes in the reversed order 
*/



void reverse(struct Node*p){
	int n = count(p);
	int A[n];
	p = first;
	int i = 0;
	while(p != NULL){
		A[i] = p->data;
		p = p->next;
		i++;
	}
	p = first;
	i--;
	while(p != NULL){
		p->data = A[i];
		p = p->next;
		i--;
	}

}

void Display(struct Node *p){
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}



int main(){
	int arr[] = {12,14,56,100,55};
	create(arr,5);
	reverse(first);
	Display(first);
}