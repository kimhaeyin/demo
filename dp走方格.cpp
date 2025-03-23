#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int count(int n,int m){
	int a;
	vector<vector<int>> dp(n+1,vector<int>(m+1,0));//创建二维数组外行内列
	dp[1][1] = 1;
	for(int i = 1;i < n+1;i++)
		for(int j = 1;j < m+1;j++){
			if(i%2 == 0 && j%2 == 0){
				dp[i][j] == 0;
				continue;
			}
			 if(i != 1 || j != 1){
				dp[i][j] = (i > 1 ? dp[i-1][j] : 0) + (j > 1 ? dp[i][j-1] : 0);
				a = dp[i][j];
			}
		}
		return a;
		
}

int main(){
	int n , m;
	cin >> n >> m ;
	cout << count(n,m) << endl;
}