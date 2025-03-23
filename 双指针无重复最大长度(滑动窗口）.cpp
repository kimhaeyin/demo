/*#include<iostream>
#include<algorithm>
#include<cstring>
#include<unordered_map>
#include<vector>
using namespace std;

const int N = 10010;
int n ;
vector<int> nums (N);
unordered_map<int , int > Map ;
int main(){
	scanf("%d",&n);
	for(int i = 0;i < n ;i ++){
		scanf("%d",&nums[i]);
	}
	int left = 0;
	int res = 0;
	
	for(int right = 0 ;right < n;right ++){
		Map[nums[right]] ++;
		 if (Map[nums[right]] > 1) {
            Map[nums[left]]--; // 移除左边界元素
            left++;            // 左边界右移
        }
        res = max(res,right - left + 1);
	}
	printf("%d",res);
	return 0 ;
}*/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

const int N = 10010;
int n;
vector<int> nums(N);
unordered_map<int, int> Map; // 记录元素出现次数

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int res = 0; // 最长无重复子数组的长度
    int left = 0; // 滑动窗口的左边界

    for (int right = 0; right < n; right++) {
        Map[nums[right]]++; // 将当前元素加入窗口

        // 如果窗口内有重复元素，移动左边界缩小窗口
        while (Map[nums[right]] > 1) {
            Map[nums[left]]--; // 移除左边界元素
            left++;            // 左边界右移
        }

        // 更新最大窗口长度
        res = max(res, right - left + 1);
    }

    printf("%d\n", res); // 输出结果
    return 0;
}