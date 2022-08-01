#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    m %= n;
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        dq.push_back(num);
    }

    for (int i = 0; i < m; i++)
    {
        int number = dq.back();
        dq.pop_back();
        dq.push_front(number);
    }

    while (dq.size()>1)
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << dq.front();

    return 0;
}