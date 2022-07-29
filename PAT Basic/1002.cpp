#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string a[15] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    vector<string> v;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }

    while (sum)
    {
        v.push_back(a[sum % 10]);
        sum /= 10;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
        if (i)
            cout << " ";
    }

    return 0;
}