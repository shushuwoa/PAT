#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int b;
    vector<int> A, B;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        A.push_back(a[i] - '0');
    }
    int t = 0;
    for (int i = 0; i < A.size(); i++)
    {
        t = t * 10 + A[i];
        B.push_back(t / b);
        t = t % b;
    }
    reverse(B.begin(), B.end());
    while (B.size() > 1 && B.back() == 0)
    {
        B.pop_back();
    }

    for (int i = B.size() - 1; i >= 0; i--)
    {
        cout << B[i];
    }
    cout << " " << t;

    return 0;
}