#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"
#define int long long



void solve(){
	int n;
	cin >> n;
	int phi[n+1];
	for(int i = 1; i <= n; ++i){
		phi[i] = i;
	}
	for(int p = 2; p <= n; ++p){
		if(phi[p] == p){
			phi[p] = p-1;
			for(int i = 2*p; i <= n; i += p){
				phi[i] = (phi[i]/p)*(p-1);
			}
		}
	}
	for(int i = 1; i <= n; ++i){
		cout << "phi(" << i << ") : " << phi[i] << nline;
	}
}



int32_t main(){
  fast_io;
	solve();
}








