#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

class Moon
{
public:
    double cap;
    double price;
    double unit_price;
};

bool compareMoon(Moon &m1, Moon &m2)
{
    return m1.unit_price > m2.unit_price;
}

int main()
{
    vector<Moon> v;
    int n, d;
    cin >> n >> d;
    double ans;
    for (int i = 0; i < n; i++)
    {
        Moon m;
        cin >> m.cap;
        v.push_back(m);
    }
    for (vector<Moon>::iterator it = v.begin(); it != v.end(); it++)
    {
        double p;
        cin >> p;
        it->price = p;
        it->unit_price = it->price / it->cap;
    }
    sort(v.begin(), v.end(), compareMoon);
    for (vector<Moon>::iterator it = v.begin(); it != v.end(); it++)
    {
        if (d > it->cap)
        {
            ans += it->price;
            d -= it->cap;
        }
        else
        {
            ans += it->unit_price * d;
            break;
        }
    }
    printf("%.2lf\n", ans);
    return 0;
}