#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long int a, b, c;
    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c;
        if (a + b > c)
            cout << "Case #" << i << ": true" << endl;
        else
            cout << "Case #" << i << ": false" << endl;
    }
    return 0;
}