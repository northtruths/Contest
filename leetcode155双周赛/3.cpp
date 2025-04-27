#define _CRT_SECURE_NO_WARNINGS


#include"head.h"


//��δac�����ʱ�䣬����ʮ�����ӿ���ac��
class Solution {
public:
    string s1, s2;//s1Ϊˮƽ�ִ���s2��ֱ�ִ�
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
        vector<vector<bool>> hash1(m, vector<bool>(n, false));//��¼����pattern���±�
        vector<vector<bool>> hash2(m, vector<bool>(n, false));//�жϵ�Ԫ���Ƿ��¼
        int ret = 0;
        //����ˮƽ�Ӵ�����ǰ�±� / n Ϊ�У���ǰ�±� % nΪ��
        //���ڴ�ֱ�Ӵ�����ǰ�±� % m Ϊ�У���ǰ�±� / mΪ��
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