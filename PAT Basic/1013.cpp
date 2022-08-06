#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int i, j;
    int m, n;
    cin >> m >> n;
    vector<int> v;
    for (i = 2; i < 110000; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            v.push_back(i);
    }
    int flag = 0;
    for (int k = m - 1; k < n; k++)
    {
        cout << v[k];
        flag++;
        if (flag > 0 && flag % 10 == 0)
            cout << '\n';
        if (k + 1 != n && flag % 10 != 0)
            cout << " ";
    }
    return 0;
}