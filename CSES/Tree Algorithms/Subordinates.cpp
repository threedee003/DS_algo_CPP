#include<bits/stdc++.h>
using namespace std;
#define nline '\n'
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
const ll inf = 2e9+10;
const ll N = 1e7+10;


vector<ll> g[N];


void solve(ll src,ll par,vector<ll>& ans){
	ll sub = 0;
	for(auto i : g[src]){
		if(i != par){
			solve(i,src,ans);
			sub += (1+ans[i]);
		}
	}
	ans[src] = sub;
}




int main(){
	fast_io;
	ll n;
	cin >> n;
	for(ll i = 2; i <= n; ++i){
		ll x;
		cin >> x;
		g[x].push_back(i);
		g[i].push_back(x);
	}
	vector<ll> ans(n+1,0);
	solve(1,0,ans);
	for(ll i = 1; i < (ll)ans.size(); ++i){
		cout << ans[i] << " ";
	}
}
