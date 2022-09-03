#include<bits/stdc++.h>
using namespace std;
#define nline '\n'
typedef long long ll;

const int N = 1e9+6;


int vis[8][8];
int level[8][8] = {N};


int getX(string s){
	return s[0]-'a';
}

int getY(string s){
	return s[1]-'1';
}

bool isValid(int x, int y){
	return x >= 0 && y >= 0 && x < 8 && y < 8;
}

vector<pair<int,int>> movements = {
	{-1,2},{1,2},
	{-1,-2},{1,-2},
	{2,-1},{2,1},
	{-2,-1},{-2,1},
};



int bfs(string src,string dest){
	int sourceX = getX(src);
	int sourceY = getY(src);
	int destX = getX(dest);
	int destY = getY(dest);
	queue<pair<int,int>> q;
	level[sourceX][sourceY] = 0;
	q.push({sourceX,sourceY});
	vis[sourceX][sourceY] = 1;
	while(!q.empty()){
		pair<int,int> v = q.front();
		int x = v.first, y = v.second;
		q.pop();
		for(auto move : movements){
			int childX = move.first+x;
			int childY = move.second+y;
			if(!isValid(childX,childY)) continue;
			if(!vis[childX][childY]){
				q.push({childX,childY});
				level[childX][childY] = level[x][y]+1;
				vis[childX][childY] = 1;
			}
		}
		if(level[destX][destY] != -1) break;
	}
	return level[destX][destY];
}

void reset(){
	for(int i = 0; i < 8; ++i){
		for(int j = 0; j  <8; ++j){
			level[i][j] = N;
			vis[i][j] = 0;
		}
	}
}



int main(){
	int n;
	cin >> n;
	while(n--){
		string s1,s2;
		cin >> s1 >> s2; //src dest
		cout << bfs(s1,s2) << nline;
		reset();
	}
}
