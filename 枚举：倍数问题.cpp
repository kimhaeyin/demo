#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
typedef long long  ll;
int getLength(int num){
	int count = 0;
	if(num == 0) return 1 ;
	while(num!=0){
		num/=10;
		count++;
	}
	return count;
	
}
int count(vector<int>&A,int n,int K){
	int num0=0;int result = 0;
	unordered_map<int ,int> Map ;//哈希表
	for(int num : A){
		if(Map.find(num) == Map.end()){
			num0=getLength(num);
			Map[num]=num0;
		}
	}
	for(int i=0;i<n;i++)
		for(int j =i+1;j<n;j++){
			int num1=A[i];
			int num2=A[j];
			ll combine1 = num1;
			ll combine2 = num2;
			for(int k = 0;k<Map[num2];k++){
				combine1 *= 10;
			}
			combine1 += num2;
			for(int m = 0;m<Map[num1];m++){
				combine2 *= 10; 
 			}
 			combine2 += num1;
 			if (combine1 % K == 0) result++;
            if (combine2 % K == 0) result++;
		}
		return result;
}
int main(){
	int n,K;
	cin >> n >> K;
	vector<int> A(n);
	for(int i = 0;i<n;i++){
		cin >> A[i] ;
	}
	cout << endl;
	int result = count(A,n,K);
	cout << result << endl;
	return 0 ;
}
