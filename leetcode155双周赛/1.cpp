#define _CRT_SECURE_NO_WARNINGS


//Q1.找到最常见的回答
//class Solution {
//public:
//    string findCommonResponse(vector<vector<string>>& responses) {
//        int M = 0;
//        string ret = "zzzzzzzzzz";
//        unordered_map<string, int> hash;
//        for (auto& e : responses) {
//            unordered_set<string> temp;
//            for (auto& s : e) {
//                if (temp.count(s) == 0) {
//                    ++hash[s];
//                    if (hash[s] > M) {
//                        ret = s;
//                        M = hash[s];
//                    }
//                    else if (hash[s] == M) {
//                        if (s < ret)
//                            ret = s;
//                    }
//                    temp.insert(s);
//                }
//            }
//        }
//        return ret;
//    }
//}; ©leetcode