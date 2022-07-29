#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num;
    map<int, bool> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        m[num] = true;
    }

    for (map<int, bool>::iterator it = m.begin(); it != m.end(); it++)
    {
        int temp = it->first;
        while (temp != 1)
        {
            if (temp & 1)
            {
                m[(temp * 3 + 1) / 2] = false;
                temp = (temp * 3 + 1) / 2;
            }
            else
            {
                m[temp / 2] = false;
                temp /= 2;
            }
        }
    }
    for (map<int, bool>::iterator it = m.end(); it != m.begin(); it--)
    {
        if (it->second == true)
        {
            v.push_back(it->first);
        }
    }

    sort(v.begin(), v.end());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
        if (i)
            cout << " ";
    }

    return 0;
}