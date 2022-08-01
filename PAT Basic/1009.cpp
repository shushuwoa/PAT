#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    vector<string> v;
    while (cin >> s)
    {
        v.push_back(s);
        char ch = getchar();
        if (ch == '\n')
            break;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
        if (i)
            cout << " ";
    }

    return 0;
}