#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
const int N = 2e5 + 10;
int n,m,u,v;
int c[N],d[N];
vector<int> atr[N] ;
vector<int> btr[N] ;
bool sta1[N],sta2[N];
int dfs(int x,int y,int depth){
	sta1[x] = true;
	sta2[y] = true;
	int Max = depth;
	for(int  i : atr[x]){
		for(int j : btr[y]){
			if(c[i] == d[j]&&!sta1[i]&&sta2[j]){
			Max = max(dfs(i,j,depth+1),Max);
			}
		}
	}
	return Max;
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1 ; i <= n ;i ++){
		scanf("%d ",&c[i]);
	}
	for(int i = 1 ; i <= m;i ++){
		scanf("%d ",&d[i]);
	}
	for(int i = 1 ; i<= n - 1; i ++){
		cin >> u >> v;
		atr[u].push_back(v);
		atr[v].push_back(u);
	}
	for(int i = 1 ; i<= m - 1; i ++){
		cin >> u >> v;
		btr[u].push_back(v);
		btr[v].push_back(u);
	}
	
	int res = dfs(1,1,1);
	cout << res <<endl ;
	return 0 ;
}