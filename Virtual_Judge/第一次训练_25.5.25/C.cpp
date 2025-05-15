#define _CRT_SECURE_NO_WARNINGS


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	//题目解析：将一个数组的数分为两组，每组数量至少为1，两组所有元素的最小公约数不能相同
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		vector<int> nums(n);
//		vector<int> hash(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> nums[i];
//			hash[i] = i;
//		}
//		vector<int> ret(n, 1);
//		sort(hash.begin(), hash.end(), [&nums](int x, int y)->bool {return nums[x] > nums[y];});
//		int max = nums[hash[0]];
// 		ret[hash[0]] = 2;
//		int flag = 0;//判断是否能找到
//		for (int i = 1; i < n; ++i) {
//			if (max > nums[hash[i]]) {
//				flag = 1;
//				break;
//			}
//			ret[hash[i]] = 2;
//		}
//		if (flag) {
//			cout << "YES" << endl;
//			for (auto& e : ret)
//				cout << e << ' ';
//			cout << endl;
//		}
//		else {
//			cout << "NO" << endl;
//		}
//	}
//	return 0;
//}