#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	//̰�ģ���С��С��������Ϊ��С��ǰ���Ǹ�
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
//		int flag = 1;//0Ϊ���ܣ�1Ϊ��
//		int pre = min(a[0], b - a[0]);//ǰ���Ǹ�
//		for (int i = 1; i < n; ++i) {
//			int x = a[i], y = b - a[i];
//			if (x > y)
//				swap(x, y);//��xΪС���Ǹ�
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