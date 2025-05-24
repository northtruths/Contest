#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
using namespace std;

void Acc(int a, int b, int c, int d, int e, int f) {
	double temp = (300 * a + 300 * b + 200 * c + 100 * d + 50 * e) / (300.0 * (a + b + c + d + e + f));
	if (temp == 1) {
		cout << "100.00%" << ' ';
		return;
	}
	int ret = (int)(temp * 100000);

	vector<int> nums(5);
	for (int i = 0; i < 5; ++i) {
		nums[4 - i] = ret % 10;
		ret /= 10;
	}
	if (nums[4] >= 5)
		++nums[3];
	for (int i = 3; i >= 1; --i) {
		if (nums[i] >= 10) {
			++nums[i - 1];
			nums[i] -= 10;
		}
	}
	cout << nums[0] << nums[1] << '.' << nums[2] << nums[3] << '%' << ' ';
}

void pp(int a, int b, int c, int d, int e, int f, int ppmax) {
	double temp = max(0.0, (320 * a + 300 * b + 200 * c + 100 * d + 50 * e) / (320.0 * (a + b + c + d + e + f)) - 0.8) * 5 * ppmax;
	int ret = (int)temp;
	temp -= ret;
	if (temp >= 0.495555555555555555)
		++ret;
	cout << ret << ' ';
}
		

int main() {
	int t;
	cin >> t;
	while (t--) {
		int ppmax = 0;
		cin >> ppmax;
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		Acc(a, b, c, d, e, f);
		pp(a, b, c, d, e, f, ppmax);
		cout << endl;
	}
	return 0;
}


//2
//630
//3029 2336 377 41 10 61
//3000
//20000 10000 0 0 0 0
