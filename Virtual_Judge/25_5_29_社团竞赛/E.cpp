#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//
//int main() {
//	int t = 0;
//	cin >> t;
//	while (t--) {
//		int m, a, b, c;
//		cin >> m >> a >> b >> c;
//		int ret = 0;
//		int m1 = m, m2 = m;
//		if (m1 >= a) {
//			m1 -= a;
//			ret += a;
//		}
//		else
//		{
//			m1 = 0;
//			ret += m;
//		}
//		if (m1 > 0) {
//			if (m1 >= c) {
//				ret += c;
//				c = 0;
//			}
//			else {
//				ret += m1;
//				c -= m1;
//			}
//		}
//		if (m2 >= b) {
//			m2 -= b;
//			ret += b;
//		}
//		else {
//			m2 = 0;
//			ret += m;
//		}
//		if (m2 > 0) {
//			if (m2 >= c) {
//				ret += c;
//				c = 0;
//			}
//			else {
//				ret += m2;
//				c -= m2;
//			}
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}