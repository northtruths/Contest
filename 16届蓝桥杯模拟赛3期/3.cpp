#include<iostream>
#include<cmath>

using namespace std;

bool f1(int x)
{
	for(int i = 2; i <= sqrt(x); ++i)
		if(x / i == x / double(i))
			return false;
	return true;
}

int main()
{
	int ret = 0;
	for(int n = 2024; n >= 2; --n)
	{
		if(2024 / n == 2024.0 / n && f1(n))
		{
			cout << n << endl;
			ret += n;
		}
	}
	cout << "ret:" << ret << endl;
	return 0;
 } 
