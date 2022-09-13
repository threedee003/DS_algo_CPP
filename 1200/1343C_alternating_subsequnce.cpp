#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"
#define int long long
 
//                             https://codeforces.com/problemset/problem/1343/C

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	//int pt1(0),pt2(0);
	auto sgn = [&](int x){
		if(x > 0) return 1;
		else return -1;
	};
	int sum = 0;
	for(int i = 0; i < n; ++i){
		int curr = a[i];
		int j = i;
		while(j < n && sgn(curr) == sgn(a[j])){
			curr = max(curr,a[j]);
			j++;
		}
		sum += curr;
		i = j-1;
	}
	cout << sum << nline;
}








int32_t main(){
	fast_io;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
