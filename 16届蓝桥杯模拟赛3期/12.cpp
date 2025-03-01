#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m; 
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> row_sum(n);//第i行的和
    vector<int> col_sum(m);//第j列的和
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            row_sum[i] += a[i][j];
            col_sum[j] += a[i][j];
        }
    }
    
    //r1~r2行的和
    vector<vector<int>> dp_row(n, vector<int>(n, INT_MIN));
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            if(j - 1 < i)
                dp_row[i][j] = row_sum[i];
            else
				dp_row[i][j] = dp_row[i][j - 1] + row_sum[j];
            //cout << i << '~' << j << ":" << dp_row[i][j] << endl;
        }
    }
    //c1~c2列的和
    vector<vector<int>> dp_col(m, vector<int>(m, INT_MIN));
    for(int i = 0; i < m; ++i)
    {
        for(int j = i; j < m; ++j)
        {
            if(j - 1 < i)
                dp_col[i][j] = col_sum[i];
            else
				dp_col[i][j] = dp_col[i][j - 1] + col_sum[j];
			cout << i << '~' << j << ":" << dp_col[i][j] << endl;
        }
    }
    int row_left = 0, row_right = 0;
    int col_left = 0, col_right = 0;
    int ret = INT_MIN;
    while(row_left < n)
    {
        row_right = row_left;
        while(col_left < m)
        {
            col_right = col_left;
            while(row_right < n)
            {
                
                while(col_right < m)
                {
                    int cur = dp_row[row_left][row_right] + dp_col[col_left][col_right];
                    for(int i = row_left; i <= row_right; ++i)
                        for(int j = col_left; j <= col_right; ++j)
                            cur -= a[i][j];
                    ret = max(ret, cur);
                    ++col_right;
                }
                ++row_right;
            }
            ++col_left;
        }
        ++row_left;
    }
    cout << ret << endl;
    return 0;
}
