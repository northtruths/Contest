#define _CRT_SECURE_NO_WARNINGS


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, k;
//		cin >> n >> k;
//		vector<int> nums(n);
//		for (int i = 0; i < n; ++i)
//			cin >> nums[i];
//		sort(nums.begin(), nums.end(), [&nums](int x, int y)->bool {return x > y; });
//		int temp = nums[1];
//		int flag = 0;//��ǰΪ˭������0Ϊtom��1Ϊjerry��˭������˭��
//		int count = 0;//ͳ��������������Ϊ�������������Ϊ��������Ϊ����ʱtomӮ��Ϊż��JerryӮ
//		if (nums[0] - 1 - nums[n - 1] > k || temp - nums[n - 1] > k)
//			flag = 0;
//		else {
//			for (auto& e : nums) {
//				if (e % 2 == 1)
//					++count;
//			}
//			if (count % 2 == 1)
//				flag = 1;
//			else
//				flag = 0;
//		}
//		if (flag == 0)
//			cout << "Jerry" << endl;
//		else
//			cout << "Tom" << endl;
//	}
//	return 0;
//}