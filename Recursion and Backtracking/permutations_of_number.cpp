#include <iostream>
using namespace std;

void print(int perm[],int N){
	for(int i = 0; i < N; ++i){
		cout << " " << perm[i];
	}
	cout << endl;
}


void alexanderbog(int perm[],int N,int k){
	static int level = -1;
	level++;
	perm[k] = level;
	if(level == N) print(perm,N);
	else{
		for(int i = 0; i < N; ++i){
			if(perm[i] == 0) alexanderbog(perm,N,i);
		}
	}
	level--;
	perm[k] = 0;
}



int main(){
	int i,N = 5;
	int perm[N] = {0};
	alexanderbog(perm,N,0);
	return 0;
}
