#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"
#define int long long
const int inf = 1e9+7;
const int N = 1e3+9;



//                                           https://codeforces.com/problemset/problem/1360/C


int pop_count(int x){
	int ans = 0;
	for(int i = 31; i >=0 ; --i){
		if(x & (1 << i)) ans++;
	}
	return ans;
}



void solve(){
	int n;
	cin >> n;
	int arr[n];
	int odds = 0;
	int evens = 0;
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
		if(arr[i]&1) odds++;
	}
	evens = n-odds;
	if(odds%2 != evens%2){
		cout << "NO" << nline;
		return;
	}
	else{
		if(evens%2 == 0){
			cout << "YES" << nline;
		}
		else{
			for(int i = 0; i < n; ++i){
				for(int j = i+1; j < n; ++j){
					if(arr[i]%2 != arr[j]%2 && abs(arr[i]-arr[j]) == 1){
						cout << "YES" << nline;
						return;
					}
				}
			}
			cout << "NO" << nline;
		}
	}
}







int32_t main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
