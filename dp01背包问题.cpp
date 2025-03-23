#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int N = 1010;
int n , m;
int v[N],w[N];
int mem[N][N];//记忆数组，维数等于dfs参数的个数
int f[N][N];
/*int dfs(int x,int spV){
	if(mem[x][spV]){
		return mem[x][spV];
	}
	int sum = 0;
	if(x > n){
		return 0 ;
	}
	else{
		if(spV < v[x]){
			sum = dfs(x+1,spV);
		}
		else{
			sum = max(dfs(x+1,spV),dfs(x+1,spV-v[x])+w[x]);
		}
	}
	mem[x][spV] = sum;
	return sum;
}*/
int main(){
	scanf("%d %d",&n,&m);
	for(int i = 1 ;i <= n;i ++){
		scanf("%d %d",&v[i],&w[i]);
		
	}
	for(int i = n ;i > 0 ;i --)
		for(int  j = 0 ;j <= m;j ++){
			if(j < v[i]) f[i][j] = f[i+1][j];
			else{
				f[i][j] = max(f[i+1][j],f[i+1][j-v[i]]+w[i]);
			}
		}
	//int res = dfs(1,m);
	//printf("%d",res);
	printf("%d",f[1][m]);//倒序搜索回到顶部
	return 0;
}