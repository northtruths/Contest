#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int ret = 0;//�õڼ��������죬��Ϊ ret-1
    int n = 0;
    cin >> n;
    vector<int> e(n);
    for(int i = 0; i < n; ++i)
        cin >> e[i];
    int m = 0;
    cin >> m;
    int v = 0;
    for(int i = 0; i < m; ++i)
    {
        cin >> v;
        if(v >= e[ret])
            ++ret;
        if(ret >= n)
            break;
    }
    cout << ret << endl;
    return 0;
}
