#include<bits/stdc++.h>
using namespace std;




int main(){
	
	stack<int> s;
	int A[] = {1,2,3,4};
	for(int i = 0; i < 5; i++){
		s.push(A[i]);
	}
	for(int i = 0; i < 5; i++){
		cout << s.top() << endl;
		if(s.empty()){
			cout << "stack is empty" << endl;
		}
		s.pop();
	}
	if(s.empty()){
		cout << "its now empty";

	}
}