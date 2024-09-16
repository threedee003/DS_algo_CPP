#include <bits/stdc++.h>

using namespace std;

template <typename T> void display(T x , T y); // prototyping
template <typename T> T return_value(T x, T y);
template <typename myType> void display(myType x);
template <typename T1, typename T2> void display(T1 a, T2 b);


// template <typename identifier> ret_type fun_name(parameters){
	
// }




template <typename myType> void display(myType x){
	cout << "you have passed " << x << endl;
}




template <typename T> void display(T x, T y){
	cout << "1st variable is " << x << endl;
	cout << "2nd variable is " << y << endl;
}


template <typename T> T return_value(T x, T y){
	return (x >= y) ? x : y;	
}



template <typename T1, typename T2> void display(T1 a, T2 b){
	cout << a << endl;
	cout << b << endl;
}



int main(){
	display(3);
	display("Hello");
	display(44,55);
	cout << return_value(43.4, -99.2) << endl;
	int d = 10;
	float p = d*2.33;
	cout << p << endl;
	display(22, 99.3);
}