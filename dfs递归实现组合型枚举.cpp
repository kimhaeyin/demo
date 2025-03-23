#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int N = 20;
vector<int> st (N);

void dfs(int n,int r,int x){
	if(x > r){
		for(int i = 1;i <= r ;i ++){
			if(st[i] == 1){
				cout << i <<' ';
			}
		}
		cout << endl ;
		return;
	}
	
	st[x] = 1;
	arr++;
	dfs(n,r,x+1);
	
	st[x] = 0;
	dfs(n,r,x+1);
}

int main(){
	int n,r;
	cin >> n >> r ;
	dfs(n,r,1);
	return 0 ;
}