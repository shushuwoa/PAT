#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    int pre_prime = 3, count = 0;

    for (i = 3; i <= n; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > sqrt(i))
        {
            if (i - pre_prime == 2)
            {
                count++;
            }
            pre_prime = i;
        }
    }

    cout << count;
    return 0;
}