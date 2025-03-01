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
			++count;//��Ϊ��ǰѡ��1(֮ǰûѡ��)����һ���µ��ַ���������++ 
			dfs(v, i + 1, count);
			v[i] = 0;
		}
	}
}

int main()
{
	//ֱ�ӱ�����������ǰλ����ǰ������ж��Ƿ���Ϊ1������
	vector<int> v(24, 0);
	int count = 1;//ȫΪ0 
	dfs(v, 0, count);
	cout << count;
	return 0;
}
