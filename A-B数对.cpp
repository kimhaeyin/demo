#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int N , C;
vector<int> nums;
int check(){
	int count = 0;
	unordered_map<int , int> Map ;
	for(int num : nums){
		Map[num]++;
	}
	for(int num : nums){
		int B = num + C;
		if(Map.find(B) != Map.end()){
			count  += Map[num];
		}
	}

	return count;
}

int main(){
	scanf("%d %d",&N,&C);
	nums.resize(N);
	for(int i = 0 ; i < N ;i ++){
		scanf("%d",&nums[i]);
	}
	int res = check();
	printf("%d",res);
}