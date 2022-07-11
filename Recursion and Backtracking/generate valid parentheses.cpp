#include <bits/stdc++.h>
using namespace std;


//typedef long long ll;
vector<string> v;

void gen(string& s, int op, int clos){
	if(op == 0 && clos == 0){
		v.push_back(s);
		return;
	}
	if(op > 0){
		s += '(';
		gen(s,op-1,clos);
		s.pop_back();
	}
	if(clos > 0){
		if(op < clos){
			s.push_back(')');
			gen(s,op,clos-1);
			s.pop_back();
		}
	}
}

int main(){
	int n = 3;
	string p = "";
	gen(p,n,n);
	for(auto it : v) cout << it << endl;
}


n = 3
// ((()))
// (()())
// (())()
// ()(())
// ()()()
