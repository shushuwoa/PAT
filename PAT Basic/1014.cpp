#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    const string day[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int flag = 0;

    for (int i = 0; i < s1.size() && i < s2.size(); i++)
    {
        if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G' && s2[i] >= 'A' && s2[i] <= 'G' && !flag)
        {
            flag = 1;
            cout << day[s1[i] - 'A'] << " ";
            continue;
        }
        if (flag)
        {
            if (s1[i] >= '0' && s1[i] <= '9' && s2[i] >= '0' && s2[i] <= '9' && s1[i] == s2[i])
            {
                printf("%02d:", s1[i] - '0');
                break;
            }
            if (s1[i] >= 'A' && s1[i] <= 'N' && s2[i] >= 'A' && s2[i] <= 'N' && s1[i] == s2[i])
            {
                printf("%02d:", s1[i] - 'A' + 10);
                break;
            }
        }
    }
    int m = 0;
    for (int i = 0; i < s3.size() && i < s4.size(); i++)
    {
        if ((s3[i] >= 'a' && s3[i] <= 'z' || (s3[i] >= 'A' && s3[i] <= 'Z')) && (s4[i] >= 'a' && s4[i] <= 'z' || (s4[i] >= 'A' && s4[i] <= 'Z'))&& s3[i]==s4[i])
        {
            printf("%02d\n", m);
            break;
        }
        m++;
    }

    return 0;
}