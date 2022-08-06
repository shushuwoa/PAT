#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    int d;
    cin >> a >> b >> d;
    int temp = a + b;
    vector<int> v;
    if (temp == 0)
        cout << 0;
    while (temp)
    {
        v.push_back(temp % d);
        temp /= d;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
    }

    return 0;
}
