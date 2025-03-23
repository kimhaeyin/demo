#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

const int N = 1e5 + 10;
int n , q , u , v , s , t ;
int cnt;//购买零食种类
vector<int> c(N);
vector<int> atir[N];//星球邻接表
vector<int> btir[N];//起点终点单向邻接表
bool sta[N];//记录状态
int dfs(int x,int y){
	unordered_map<int,int> Map ;
	if(x == y) {
		
	}
	sta[x] = true;
	auto a = atir[x];
	if(a && !sta[a]){
		dfs(a,y);
	}
}

int main(){
	cin >> n >> q;
	for(int i = 1 ;i <= n ;i ++){
		cin >> c[i];
	}
	for(int i = 1 ;i <= n-1;i ++){
		cin >> u >> v;
		atir[u].push_back(v);
		atir[v].push_back(u);
	}
	for(int i = 1 ;i <= q ;i ++){
		cin >> s >> t;
		btir[s].push_back(t);
		int res = dfs(s,t);
	}
	
}