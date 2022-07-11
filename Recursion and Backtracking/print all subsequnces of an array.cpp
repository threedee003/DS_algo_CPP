#include <bits/stdc++.h>
using namespace std;


//typedef long long ll;




void func(int i,vector<int>& t,vector<vector<int>>& a,vector<int>& src){
	if(i >= src.size()){
		a.push_back(t);
		return;
	}
	t.push_back(src[i]);
	func(i+1,t,a,src);
	t.pop_back();
	func(i+1,t,a,src);
}




int main(){
	vector<int> v;
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	vector<vector<int>> ans;
	vector<int> t;
	func(0,t,ans,v);
	for(int i = 0; i < ans.size(); ++i){
		for(int j = 0; j < ans[i].size(); ++j){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}

