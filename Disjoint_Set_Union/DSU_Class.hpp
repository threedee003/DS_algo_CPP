
#include <bits/stdc++.h>
using namespace std;


class dsu{
	public:
		int len;
		int *size;
		int *parent;

		dsu(int len){
			this->len = len;
			size = new int[len];
			parent = new int[len];
		}

		void make(int v){
			parent[v] = v;
			size[v] = 1;
		}

		int find(int v){
			if(parent[v] == v){
				return v;
			}
			return parent[v] = find(parent[v]);
		}

		void Union(int a,int b){
			a = find(a);
			b = find(b);
			if(a != b){
				if(size[a] < size[b]){
					swap(a,b);
				}
				parent[b] = a;
				size[a] += size[b];
			}
		}


		int tellSz(int a){
			a = find(a);
			return size[a];
		}

};



