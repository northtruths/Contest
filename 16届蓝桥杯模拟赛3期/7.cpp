#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<int>& v, int i, int& count)
{
	for(i; i < 24; ++i)
	{
		int cur = 0;
		for(int j = i - 1; j >= max(0, i - 4); --j)
		{
			if(v[j])	
				++cur;
		}
		if(cur < 3)
		{
			v[i] = 1;
			++count;//因为当前选择1(之前没选过)，是一个新的字符串，所以++ 
			dfs(v, i + 1, count);
			v[i] = 0;
		}
	}
}

int main()
{
	//直接暴力搜索，当前位置向前看五个判断是否能为1，计数
	vector<int> v(24, 0);
	int count = 1;//全为0 
	dfs(v, 0, count);
	cout << count;
	return 0;
}
