#define _CRT_SECURE_NO_WARNINGS


//class Solution {
//public:
//    int maxSum(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        auto end = unique(nums.begin(), nums.end());
//        int ret = 0;
//        auto begin = nums.begin();
//        int flag = 0;
//        while (begin != end) {
//            if (*begin > 0)
//            {
//                ret += *begin;
//                flag = 1;
//            }
//            ++begin;
//        }
//        if (flag == 0)
//        {
//            ret = INT_MIN;
//            for (auto& e : nums)
//            {
//                ret = max(ret, e);
//            }
//        }
//        return ret;
//    }
//};




//未ac，超时
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
//        vector<int> ret(queries.size());
//        unordered_map<int, int> hash_n; // 每个元素的个数
//        for (int i = 0; i < nums.size(); ++i) {
//            ++hash_n[nums[i]];
//        }
//        for (int i = 0; i < queries.size(); ++i) {
//            if (hash_n[nums[queries[i]]] == 1)
//                ret[i] = -1;
//            else
//                ret[i] = Find(nums, queries[i]);
//        }
//        return ret;
//    }
//    int Find(vector<int>& nums, int i) {
//        int left = i - 1;
//        int right = i + 1;
//        if (left < 0)
//            left = nums.size() - 1;
//        if (right >= nums.size())
//            right = 0;
//        while (left != right) {
//            if (nums[i] == nums[left])
//                return abs(i - left);
//            if (nums[i] == nums[right])
//                return abs(right - i);
//            --left; ++right;
//            if (left < 0)
//                left = nums.size() - 1;
//            if (right >= nums.size())
//                right = 0;
//        }
//        return abs(right - i);
//    }
//}; 
////nums = [1,3,1,4,1,3,2], queries = [0,3,5]©leetcode
//int main()
//{
//    vector<int> nums = { 1,3,1,4,1,3,2 };
//    vector<int> queries = { 0, 3, 5 };
//    Solution s;
//    s.solveQueries(nums, queries);
//    return 0;
//}




#include <iostream>
using namespace std;
class Solution {
public:
    int beautifulNumbers(int l, int r) {
        int ret = 0;
        for (int i = l; i <= r; ++i) {
            int cur = i;
            double x = 1;//乘积
            int y = 0;//和
            while (cur) {
                x *= cur % 10;
                y += cur % 10;
                cur /= 10;
                if (x == 0)
                    break;
            }
            if (x / y == (int)(x / (double)y))
                ++ret;
        }
        return ret;
    }
};

int main()
{
    Solution s;
    cout << s.beautifulNumbers(10, 20);
    return 0;
}