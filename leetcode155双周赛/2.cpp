#define _CRT_SECURE_NO_WARNINGS

#include"head.h"

//class Solution {
//public:
//    vector<int> baseUnitConversions(vector<vector<int>>& conversions) {
//        //dp[i]为0到i的个数
//        //dp[i] * conversions[i][2] = dp[i + conversions[i][1]]
//        int n = conversions.size();
//        vector<long long> dp(n + 1);
//        dp[0] = 1;
//        for (int i = 1; i <= n; ++i) {
//            dp[conversions[i - 1][1]] = (dp[conversions[i - 1][0]] * conversions[i - 1][2]) % (long long)(10e8 + 7);
//        }
//        vector<int> ret(n + 1);
//        for (int i = 0; i <= n; ++i)
//            ret[i] = dp[i];
//        return ret;
//    }
//}; ©leetcode
//
//int main() {
//    Solution sl;
//    vector<vector<int>> vv = { {0,1,1000000000} ,{1,2,1000000000} };
//    sl.baseUnitConversions(vv);
//    cout << 1000000000000000000 % (int)(10e8 + 7) << endl;
//    return 0;
//}