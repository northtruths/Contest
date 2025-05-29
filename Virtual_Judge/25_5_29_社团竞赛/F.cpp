#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//int main() {
//	//根据鸽巢原理，原数组数据种类不会超过数组大小
//	//贪心：要想更可能获得符合条件的众数，让所有数数量相等最好
//	//根据上述，一个数组b为包含1~n的所有数据，那么1~n所有数都是众数，要满足前i个数的众数是ai，只需调整数组顺序即可
//	int t = 0;
//	cin >> t;
//	while (t--) {
//		int n = 0;
//		cin >> n;
//		vector<int> a(n);
//		vector<int> b(n);
//		vector<bool> count(n + 1, false);//记录某个数是否计算过，计算过则跳过
//		unordered_map<int, int> hash;//b的哈希，b每个元素的当前下标
//		for (int i = 0; i < n; ++i) {
//			cin >> a[i];
//			b[i] = i + 1;
//			hash[i + 1] = i;
//		}
//		for (int i = 0; i < n; ++i) {
//			if (count[a[i]] == false) {
//				count[a[i]] = true;
//				int temp1 = b[i], temp2 = a[i];
//				swap(b[i], b[hash[a[i]]]);
//				swap(hash[temp1], hash[temp2]);
//			}
//		}
//		for (auto& ret : b)
//			cout << ret << ' ';
//		cout << endl;
//	}
//	return 0;
//}