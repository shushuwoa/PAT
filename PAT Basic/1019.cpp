#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

// stoi 将字符串转化为数字
int toint(string &s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans = ans * 10 + (s[i] - '0');
    }
    return ans;
}

int main()
{
    string a, b;
    cin >> a;

    while (1)
    {
        while (a.size() < 4)
            a = "0" + a;
        sort(a.begin(), a.end());
        b = a;
        reverse(a.begin(), a.end());
        int a1 = toint(a);
        int b1 = toint(b);
        int temp = toint(a) - toint(b);
        if (a == b)
        {
            printf("%04d - %04d = 0000\n", a1, b1);
            break;
        }
        if (temp == 6174)
        {
            printf("%04d - %04d = 6174\n", a1, b1);
            break;
        }
        printf("%04d - %04d = %04d\n", a1, b1, temp);
        a = to_string(temp);
    }

    return 0;
}