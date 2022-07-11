#include <bits/stdc++.h>
using namespace std;


//typedef long long ll;



void f(int i,vector<int>& t,int sum,int S,vector<int>& src, vector<vector<int>>& a){
	if(i >= src.size()){
		if(sum == S){
			a.push_back(t);
		}
		return;
	}
	t.push_back(src[i]);
	sum += src[i];
	f(i+1,t,sum,S,src,a);
	t.pop_back();
	sum -= src[i];
	f(i+1,t,sum,S,src,a);
}




int main(){
	vector<int> v;
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	v.push_back(0);
	vector<vector<int>> ans;
	vector<int> t;
	//f(ind,sub,sum,tar,src,ans)
	f(0,t,0,3,v,ans);
	for(int i = 0; i < ans.size(); ++i){
		for(int j = 0; j < ans[i].size(); ++j){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}

