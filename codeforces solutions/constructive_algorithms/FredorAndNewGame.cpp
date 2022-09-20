#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"
#define int long long
const int inf = 1e9+7;
const int N = 1e3+9;

//                                            https://codeforces.com/problemset/problem/467/B

int pop_count(int x){
	int ans = 0;
	for(int i = 31; i >=0 ; --i){
		if(x & (1 << i)) ans++;
	}
	return ans;
}






int32_t main(){
	fast_io;
	int n,m,k;
	cin >> n >> m >> k;
	int arr[m+1];
	for(int i = 0; i <= m; ++i) cin >> arr[i];
	int ans = 0;
	for(int i = 0; i < m; ++i){
		if(pop_count(arr[i]^arr[m]) <= k) ans++;
	}
	cout << ans;
}
