#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    int max = 0;
    int cur = 0;
    cin >> n;
    int ret = 0;
    while(n--)
    {
        cin >> cur;
        if(cur > max)
        {
            max = cur;
            ++ret;
        }
    }
    cout << ret << endl;
    return 0;
}
