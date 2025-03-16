#define _CRT_SECURE_NO_WARNINGS


//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int totalNumbers(vector<int>& digits) {
//        unordered_map<int, int> hash;
//        int n = digits.size();
//        int ret = 0;
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j) {
//                if (i == j)
//                    continue;
//                for (int k = 0; k < n; ++k) {
//                    if (i == k || j == k)
//                        continue;
//                    if (digits[k] % 2 == 0)
//                    {
//                        int cur = 100 * digits[i] + 10 * digits[j] + digits[k];
//                        if (cur >= 100 && hash.count(cur) == 0)
//                        {
//                            ++ret;
//                            ++hash[cur];
//                        }
//                    }
//                }
//            }
//        }
//        return ret;
//    }
//}





//Q2. 设计电子表格
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//
//class Spreadsheet {
//public:
//    Spreadsheet(int rows) {
//        sheet = new vector<vector<int>>(rows, vector<int>(26, 0));
//    }
//    int Index(string& cell)
//    {
//        string digit;
//        for (int i = 1; i < cell.size(); ++i) {
//            digit += cell[i];
//        }
//        int index = 0;
//        reverse(digit.begin(), digit.end());
//        for (int i = 0; i < digit.size(); ++i) {
//            index += (digit[i] - '0') * pow(10, i);
//        }
//        return index - 1;
//    }
//
//    void setCell(string cell, int value) {
//
//        (*sheet)[Index(cell)][cell[0] - 'A'] = value;
//    }
//
//    void resetCell(string cell) {
//        if (cell[0] == '=')
//            getValue(cell);
//        else
//            setCell(cell, 0);
//    }
//
//    int getValue(string formula) {
//        string s1, s2;
//        int i = 1;
//        for (i; i < formula.size(); ++i) {
//            if (formula[i] == '+')
//            {
//                ++i;
//                break;
//            }
//            s1 += formula[i];
//        }
//        for (i; i < formula.size(); ++i)
//            s2 += formula[i];
//        int x = 0, y = 0;
//        if ('A' <= s1[0] && s1[0] <= 'Z')
//            x = (*sheet)[Index(s1)][s1[0] - 'A'];
//        else {
//            reverse(s1.begin(), s1.end());
//            for (int i = 0; i < s1.size(); ++i) {
//                x += (s1[i] - '0') * pow(10, i);
//            }
//        }
//        if ('A' <= s2[0] && s2[0] <= 'Z')
//            y = (*sheet)[Index(s2)][s2[0] - 'A'];
//        else {
//            reverse(s2.begin(), s2.end());
//            for (int i = 0; i < s2.size(); ++i) {
//                y += (s2[i] - '0') * pow(10, i);
//            }
//        }
//        //cout << formula << ':' << x << ',' << y << endl;
//        return x + y;
//    }
//private:
//    vector<vector<int>>* sheet;//表格
//};
//int main()
//{
//    Spreadsheet s1(3);
//    cout << s1.getValue("=7+5") << endl;
//    s1.setCell("A1", 10);
//
//    int a = 0;
//    return 0;
//}