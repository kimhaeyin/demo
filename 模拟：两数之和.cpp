  #include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> sum(int target,vector<int> &A,int n){
	vector<int> nums;
	unordered_map<int , int>Map;
	for(int num : A){
		Map[num] = target - num;
	}
	for(int i = 0 ;i < n ;i++){
		int a = A[i];
		if(Map.find(Map[a]) == Map.end()||Map.find(Map[a])==Map.find(a)){
			continue;
		}
		else{
			nums.push_back(i);
		}
	}
	return nums;
}

int main(){
	int target, n;
	cin >> target >> n;
	vector<int> A(n);
	for(int i = 0 ;i < n ;i++){
		cin >> A[i];
	}
	vector<int> B(n);
	B=sum(target,A,n);
	for(int j = 0 ;j < B.size() ;j++){
		cout << B[j] <<' '<<endl;
	}
	return 0;
}