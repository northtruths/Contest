#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>

using namespace std;

int Count(string& S, string& cur)
{
	int len = cur.size();
	int count  = 0;
	for(int i = 0; i < S.size() - len + 1; ++i)
	{
		if(cur == S.substr(i, len))
			++count;
	}
	return count;
}

int main()
{
	string S = "ANQNANBNQNANQNQNBNINQNQNANQNINANQNANBNQNANQNQNBNBNQNQNANQNINANQNANBNQNANQNQNBNINQNQNANQNINBNQNANBNQN";
	string cur;
	unordered_map<string, int> hash;
	string ret;
	int m = 0;	
	for(int i = 0; i < S.size(); ++i)
	{
		for(int j = 1; j <= 10; ++j)
		{
			cur = S.substr(i, j);
			if(hash.count(cur) == 0)
			{
				hash[cur] = Count(S, cur);
				if(hash[cur] * cur.size() > m){
					ret = cur;
					m = hash[cur] * cur.size(); 
				}
			}
		}
	}

	cout << ret << endl;
	return 0;
 } 
