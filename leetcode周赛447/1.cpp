#define _CRT_SECURE_NO_WARNINGS

#include"head.h"


class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

        int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
        vector<vector<bool>> grid(n + 1, vector<bool>(n + 1, false));
        for (auto& e : buildings) {
            grid[e[0]][e[1]] = true;
        }

        int ret = 0;
        for (int i = 0; i < n + 1; ++i) {
            for (int j = 0; j < n + 1; ++j) {
                if (grid[i][j] == false)
                    continue;
                int flag = 1;
                for (auto& e : dir) {
                    int x = i + e[0];
                    int y = j + e[1];
                    if (x >= 0 && y >= 0 && x < n + 1 && y < n + 1) {
                        if (grid[x][y] == false) {
                            flag = 0;
                            break;
                        }
                    }
                }
                if (flag)
                    ++ret;
            }
        }

        return ret;
    }
};

int main() {
    Solution sl;
    vector<vector<int>> v = {{1, 2}, {2, 2}, {3, 2}, {2, 1}, {2, 3}};
    cout << sl.countCoveredBuildings(3, v);
    return 0;
}