#include<bits/stdc++.h>
using namespace std;
#define nline '\n'
typedef long long ll;

//                    https://codeforces.com/problemset/problem/520/B


int dfs(int n,int m)
{
	if(n==m)
		return 0;

	if(m>n and m%2==0)
		return dfs(n,m/2)+1;
	else
		return dfs(n,m+1)+1;
}

int main()
{
	int n,m;
	cin>>n>>m;

	cout<<dfs(n,m);

	return 0;
}
