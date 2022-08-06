#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1 = 0, a2 = 0, flag = 1, cnt2 = 0, a3 = 0, cnt4 = 0, a4 = 0, a5 = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % 5 == 0 && num % 2 == 0)
            a1 += num;
        if (num % 5 == 1)
        {
            a2 += flag * num;
            flag *= -1;
            cnt2++;
        }
        if (num % 5 == 2)
        {
            a3++;
        }
        if (num % 5 == 3)
        {
            a4 += num;
            cnt4++;
        }
        if (num % 5 == 4)
        {
            a5 = max(a5, num);
        }
    }

    if (a1)
        printf("%d ", a1);
    else
        cout << "N ";
    if (cnt2)
        printf("%d ", a2); //注意这里是cnt2  因为结果可能是0
    else
        cout << "N ";
    if (a3)
        printf("%d ", a3);
    else
        cout << "N ";
    if (a4)
        printf("%.1lf ", a4 * 1.0 / cnt4);
    else
        cout << "N ";
    if (a5)
        printf("%d", a5);
    else
        cout << "N";

    return 0;
}