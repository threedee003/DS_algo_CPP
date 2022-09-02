#include<bits/stdc++.h>
using namespace std;
#define nline '\n'
typedef long long ll;
const int N = 2e5+10;

int parent[N];
int size[N];


void make(int v){
	parent[v] = v;
	size[v] = 1;
}


int find(int v){
	if(v == parent[v]){
		return v;
	}
	return parent[v] = find(parent[v]);
}


void Union(int  a,int b){
	a = find(a);
	b = find(b);
	if(a != b){
		if(size[a] < size[b]) swap(a,b);
		parent[b] = a;
		size[a] += size[b];
	} 
}


int main(){
	int n,m;
	cin >> n >> m;
	vector<pair<int,pair<int,int>>> edges;
	for(int i = 0; i < m; ++i){
		int u,v,w;
		cin >> u >> v >> w;
		edges.push_back({w,{u,v}});
	}	
	sort(edges.begin(),edges.end());
	int total_cost = 0;
	
	for(int i = 1; i <= n; ++i) make(i);
	for(auto &edge : edges){
		int wt = edge.first;
		int u = edge.second.first;
		int v = edge.second.second;
		if(find(u) == find(v)) continue;
		Union(u,v);
		total_cost += wt;
		cout << u << " " << v << nline;
	}
	cout << total_cost;
}






//test case 1
// 6 9
// 5 4 9
// 1 4 1
// 5 1 4
// 4 3 5
// 4 2 3
// 1 2 2
// 3 2 3
// 3 6 8
// 2 6 7



//output
// 1 4
// 1 2
// 3 2
// 5 1
// 2 6
// 17

