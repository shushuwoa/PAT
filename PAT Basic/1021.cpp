#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    map<char, int> m;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    for (map<char, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << ':' << it->second << endl;
    }
    return 0;
}