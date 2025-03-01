#include<iostream>
#include<cmath>
using namespace std;

//x 与 y的最小公约数 ， x >= y 
int Func(int x, int y = 2024)
{
	if(x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	 } 
	int z = x % y;
	while(z)
	{
		x = y;
		y = z;
		z = x % y;
	}
	return y;
 } 
int main()
{
	int count = 0;
	for(int i = 1; ; ++i){
		if(Func(i) == 1)
		{
			++count;
			//cout << i << endl;
		}
		if(count == 6)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}
