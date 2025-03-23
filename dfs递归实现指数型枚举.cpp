#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int N = 20;
vector<int> st(N);//state,不能写在函数里，这样每次递归都会被初始化
//dfs相当于树的先序遍历
void dfs(int x ,int n){
	
	if(x > n){
		for(int i = 1;i <=n ;i ++){
			if(st[i] == 1){
				cout << i <<' '; 
			}
		}
		cout << endl;
		return;
	}
	st[x] = 1;
	dfs(x+1,n);
	
	st[x] = 0;
	dfs(x+1,n);
}
int main(){
	int n;
	cin >> n;
	dfs(1,n);
	return 0;
}