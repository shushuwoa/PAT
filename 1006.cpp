#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    int state[3] = {0};

    while (n)
    {
        state[i++] = n % 10;
        n /= 10;
    }

    for (int i = 0; i < state[2]; i++)
        cout << 'B';
    for (int i = 0; i < state[1]; i++)
        cout << 'S';
    for (int i = 0; i < state[0]; i++)
        cout << i + 1;

    return 0;
}