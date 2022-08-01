#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int a, b;
    while (cin >> a >> b)
    {
        if (a && b)
        {
            v.push_back(a * b);
            v.push_back(b - 1);
        }
        char ch = getchar();
        if (ch == '\n')
            break;
    }
    if (v.size())
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
            if (i + 1 != v.size())
                cout << " ";
        }
    }
    else
        cout << "0 0";

    return 0;
}