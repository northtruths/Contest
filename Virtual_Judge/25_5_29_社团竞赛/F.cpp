#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//int main() {
//	//���ݸ볲ԭ��ԭ�����������಻�ᳬ�������С
//	//̰�ģ�Ҫ������ܻ�÷���������������������������������
//	//����������һ������bΪ����1~n���������ݣ���ô1~n����������������Ҫ����ǰi������������ai��ֻ���������˳�򼴿�
//	int t = 0;
//	cin >> t;
//	while (t--) {
//		int n = 0;
//		cin >> n;
//		vector<int> a(n);
//		vector<int> b(n);
//		vector<bool> count(n + 1, false);//��¼ĳ�����Ƿ������������������
//		unordered_map<int, int> hash;//b�Ĺ�ϣ��bÿ��Ԫ�صĵ�ǰ�±�
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