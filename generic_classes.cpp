#include <bits/stdc++.h>


#define nline '\n'
using namespace std;







template <class T>class ClassName{
T p1;
T p2;

public:
	ClassName(T x, T y){
		this->p1 = x;
		this->p2 = y;
	}
	// ~ClassName();

	void display(){
		cout << "1 : " << this->p1 << nline;
		cout << "2 : " << this->p2 << nline;
	}


};




int main(){
	ClassName<int> obj(2,3);

	ClassName<string> obj2("abv", "tth");

	obj.display();
	obj2.display();


}