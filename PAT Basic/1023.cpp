#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<int, int> m;
    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;
        m[i] = num;
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        if (it->first != 0 && it->second > 0)
        {
            cout << it->first;
            it->second--;
            break;
        }
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < it->second; i++)
        {
            cout << it->first;
        }
    }
    return 0;
}