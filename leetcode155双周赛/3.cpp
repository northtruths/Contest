#define _CRT_SECURE_NO_WARNINGS


#include"head.h"


//（未ac，差点时间，再来十来分钟可能ac）
class Solution {
public:
    string s1, s2;//s1为水平字串，s2垂直字串
    int countCells(vector<vector<char>>& grid, string pattern) {
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                s1 += grid[i][j];
            }
        }
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < m; ++i) {
                s2 += grid[i][j];
            }
        }
        vector<vector<bool>> hash1(m, vector<bool>(n, false));//记录出现pattern的下标
        vector<vector<bool>> hash2(m, vector<bool>(n, false));//判断单元格是否记录
        int ret = 0;
        //对于水平子串，当前下标 / n 为行，当前下标 % n为列
        //对于垂直子串，当前下标 % m 为行，当前下标 / m为列
        int len = pattern.size();
        for (int i = len - 1; i < m * n; ++i) {
            if (s1.substr(i - len + 1, len) == pattern) {
                for (int k = i - len + 1; k <= i; ++k) {
                    hash1[k / n][k % n] = true;
                }
            }
            if (s2.substr(i - len + 1, len) == pattern) {
                for (int k = i - len + 1; k <= i; ++k) {
                    hash2[k % m][k / m] = true;
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (hash1[i][j] && hash2[i][j])
                    ++ret;
            }
        }
        return ret;
    }
}; 

int main() {
    Solution sl;
    vector<vector<char>> grid = {{'a', 'a', 'c', 'c'}, {'b', 'b', 'b', 'c'}, {'a', 'a', 'b', 'a'}, {'c', 'a', 'a', 'c'}, {'a', 'a', 'c', 'c'}};
    string pattern = "abaca";
    cout << sl.countCells(grid, pattern);
    return 0;
}