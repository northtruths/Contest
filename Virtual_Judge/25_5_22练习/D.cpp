#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	//贪心：能小就小，但条件为不小于前面那个
//	int t = 0;
//	cin >> t;
//	while (t--) {
//		int n, m;
//		cin >> n >> m;
//		vector<int> a(n);
//		for (int i = 0; i < n; ++i)
//			cin >> a[i];
//		int b = 0;
//		cin >> b;
//		int flag = 1;//0为不能，1为能
//		int pre = min(a[0], b - a[0]);//前面那个
//		for (int i = 1; i < n; ++i) {
//			int x = a[i], y = b - a[i];
//			if (x > y)
//				swap(x, y);//让x为小的那个
//			if (x >= pre) {
//				pre = x;
//				continue;
//			}
//			else if (y >= pre) {
//				pre = y;
//				continue;
//			}
//			else {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}