#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 1010;
vector<int> v = {2,3,7,3,5,2,1,4,5};
void index(vector<int> &v){
	sort(v.begin(),v.end());
	for(int i = 1 ;i < v.size() ; i ++){
		cout << v[i] <<' ';
	}
	cout << endl ;
	int value = 4;
	auto a = upper_bound(v.begin(),v.end(),value); 
	cout << *a <<endl;
}
int main(){
	index(v);
	return 0;
}