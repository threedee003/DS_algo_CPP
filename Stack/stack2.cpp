#include<bits/stdc++.h>
using namespace std;



class Stack{
public:
	int *arr;
	int top;
	int size;

	Stack(int size){
		this->size = size;
		arr = new int[size];
		top = -1;
	}


	void Push(int x){
		if(size-top > 1){
			top++;
			arr[top] = x;
		}
		else{
			cout << "Stack overflow" << endl;
		}
	}

	void Pop(){
		if(top >= 0){
			top--;
		}
		else{
			cout << "Stack underflow" << endl;
		}
	}

	int Peek(){
		if(top >= 0){
			return arr[top];
		}
		else{
			cout << "Stack is empty" << endl;
			return -1;
		}
	}

	bool isEmpty(){
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}

};

int main(){
	Stack st(5);

	st.Push(22);
	st.Push(23);
	st.Pop();
	// st.Push(21);
	// st.Push(25);
	// st.Push(25);
	cout << st.Peek();
}