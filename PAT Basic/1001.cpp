#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int step = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            step++;
        }
        else
        {
            n = (3 * n + 1) / 2;
            step++;
        }
    }
    cout << step;
    return 0;
}