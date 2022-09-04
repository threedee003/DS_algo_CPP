#include<bits/stdc++.h>
using namespace std;
#define nline '\n'
 
 
const int N = 1e9;
 
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int ans = 1;
	for(int i = 1; i < n; ++i){
		ans += (arr[i] != arr[i-1]);
	}
	cout << ans;
}
