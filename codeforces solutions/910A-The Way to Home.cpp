#include<bits/stdc++.h>
using namespace std;


//                  https://codeforces.com/contest/910/problem/A


int main(){
	int n,d;
	cin >> n >> d;
	string s;
	cin >> s;
	vector<int> v;
	for(int i = 0; i < (int)s.size(); ++i){
		if(s[i] == '1') v.push_back(i);
	}
	int curr(0),ans(0);
	for(int i = 0; i < (int)v.size();){
		if(v[i]-curr > d){
			cout << -1;
			return 0;
		}
		while(i < (int)v.size() && v[i]-curr <= d) i++;
		if(i == (int)v.size()) cout << ans+1;
		else{
			curr = v[i-1];
			ans++;
		}
	}
	return 0;
}
