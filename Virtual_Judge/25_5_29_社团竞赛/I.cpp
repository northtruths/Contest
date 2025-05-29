#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double FindMax(double ret_max, long long n, long long m) {
	while (ret_max > 0 && n && m) {//�����retΪż��ʱ������n
		if (ret_max == (int)ret_max && (int)ret_max % 2 == 0) {
			ret_max /= 2;
			--n;
		}
		else {
			ret_max /= 2;
			if (ret_max != (int)ret_max)
				ret_max = (int)ret_max + 1;
			--m;
		}
	}
	while (ret_max > 0 && n > 0) {
		ret_max = floor(ret_max / 2);
		--n;
	}
	while (ret_max > 0 && m > 0) {
		ret_max /= 2;
		if (ret_max != (int)ret_max)
			ret_max = (int)ret_max + 1;
		--m;
	}
	return ret_max;
}

double FindMin(double ret_min, long long n, long long m) {
	while (ret_min > 0 && n && m) {//����С��retΪż��ʱ������m
		if (ret_min == (int)ret_min && (int)ret_min % 2 == 0) {
			ret_min /= 2;
			--m;
		}
		else {
			ret_min = floor(ret_min / 2);
			--n;
		}
	}
	while (ret_min > 0 && n > 0) {
		ret_min = floor(ret_min / 2);
		--n;
	}
	while (ret_min > 0 && m > 0) {
		ret_min /= 2;
		if (ret_min != (int)ret_min)
			ret_min = (int)ret_min + 1;
		--m;
	}
	return ret_min;
}

int main() {
	//����,nΪ����ȡ����mΪ����ȡ��
	int t = 0;
	cin >> t;
	while (t--) {
		double x;
		long long n, m;
		cin >> x >> n >> m;
		cout << FindMin(x, n, m) << " " << FindMax(x, n, m) << endl;
	}
	return 0;
}

