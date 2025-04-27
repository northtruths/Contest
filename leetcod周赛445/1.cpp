#define _CRT_SECURE_NO_WARNINGS


//Q1.找到最近的人
//class Solution {
//public:
//    int findClosest(int x, int y, int z) {
//        if (abs(z - x) < abs(z - y))
//            return 1;
//        if (abs(z - x) > abs(z - y))
//            return 2;
//        return 0;
//    }
//}; 



//Q2.最小回文排列 I
//class Solution {
//public:
//    string smallestPalindrome(string s) {
//        vector<int> hash(26);
//        for (auto& e : s)
//            ++hash[e - 'a'];
//        vector<char> ret(s.size());
//        int left = 0, right = s.size() - 1;
//        int cur = 0;
//        while (left < right) {
//            if (hash[cur] >= 2) {
//                ret[left++] = ret[right--] = cur + 'a';
//                hash[cur] -= 2;
//            }
//            else
//                ++cur;
//        }
//        if (left == right) {
//            for (int i = 0; i < 26; ++i) {
//                if (hash[i] != 0)
//                    ret[left] = i + 'a';
//            }
//        }
//        string rs;
//        for (auto& e : ret)
//            rs += e;
//        return rs;
//    }
//}; 