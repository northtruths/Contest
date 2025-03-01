#include<iostream>

using namespace std;

int main()
{
	for(int i = 253; ; ++i)
	{
		int x = 8 * i;
		if(x / 2024 == x / 2024.0 && x / 1024 == x / 1024.0)
			{
				cout << x << endl;
				break;
			}
	}
	return 0;
}
