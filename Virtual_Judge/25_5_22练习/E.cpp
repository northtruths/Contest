#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	//̰�ģ�Խ��ķ���������Խ��ǰ�棬������Ϊ(m*n)*ai + (m*n-1)*ai+1 + ...
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> nums(n, vector<int>(m));
		vector<long long> sum(n, 0);//ÿһ���������������
		vector<int> hash(n);//nums��sum�Ķ�Ӧ�±�
		for (int i = 0; i < n; ++i) {
			hash[i] = i;
			for (int j = 0; j < m; ++j) {
				cin >> nums[i][j];
				sum[i] += nums[i][j];
			}
		}
		sort(hash.begin(), hash.end(), [&](int x, int y)->bool {return sum[x] > sum[y]; });
		long long ret = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				ret += (m * (n - i) - j) * nums[hash[i]][j];
			}
		}
		cout << ret << endl;
	}
	return 0;
}





