#include<iostream>
#include<string>
#include<utility>
using  namespace std;

int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    //s1 < s2 < s3 < s4
    if(s1 > s2)
        swap(s1, s2);
    if(s1 > s3)
        swap(s1, s3);
    if(s1 > s4)
        swap(s1, s4);
    
    if(s2 > s3)
        swap(s2, s3);
    if(s2 > s4)
        swap(s2, s4);
        
    if(s3 > s4)
        swap(s3, s4);
    cout << s1 << s2 << s3 << s4 << endl;
    return 0;
}
