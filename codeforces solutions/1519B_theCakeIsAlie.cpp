#include <bits/stdc++.h>
using namespace std;


//    https://codeforces.com/problemset/problem/1519/B



void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	vector<vector<int>> dp(n,vector<int> (m,0));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(i == 0 && j == 0) continue;
			if(i == 0) dp[i][j] = 1+dp[i][j-1];
			else if(j == 0) dp[i][j] = 1+dp[i-1][j];
			else dp[i][j] = dp[i-1][j]+(j+1);
		}
	}
	if(dp[n-1][m-1] == k) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
