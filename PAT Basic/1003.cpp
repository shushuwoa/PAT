#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        map<char, int> m;
        int p = 0, t = 0;
        for (int j = 0; j < s.size(); j++)
        {
            m[s[j]]++;
            if (s[j] == 'P')
                p = j;
            if (s[j] == 'T')
                t = j;
        }
        if (m.size() == 3 && m['T'] == 1 && m['P'] == 1 && (t - p > 1) && m['A'] != 0 && p * (t - p - 1) == (s.size() - 1 - t))
        /*
            1.只能有PAT三个字母
            2.字母T只能有一个
            3.字母P只能有一个
            4.T和P中间起码有一个A
            5.A的数量不能为0
            6.P前面A的数量 × P和T之间A的数量 == T后面A的数量
        */
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}