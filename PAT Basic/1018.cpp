#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
public:
    char cjb;
    int c_win = 0;
    int j_win = 0;
    int b_win = 0;
    int equ = 0;
    int lose = 0;
};

int main()
{
    int n;
    cin >> n;
    Person p1, p2;
    for (int i = 0; i < n; i++)
    {
        char a, b;

        cin >> a >> b;
        p1.cjb = a;
        p2.cjb = b;
        if (p1.cjb == 'C' && p2.cjb == 'J')
        {
            p1.c_win++;
            p2.lose++;
        }
        if (p1.cjb == 'C' && p2.cjb == 'C')
        {
            p1.equ++;
            p2.equ++;
        }
        if (p1.cjb == 'C' && p2.cjb == 'B')
        {
            p1.lose++;
            p2.b_win++;
        }
        if (p1.cjb == 'J' && p2.cjb == 'C')
        {
            p1.lose++;
            p2.c_win++;
        }
        if (p1.cjb == 'J' && p2.cjb == 'J')
        {
            p1.equ++;
            p2.equ++;
        }
        if (p1.cjb == 'J' && p2.cjb == 'B')
        {
            p1.j_win++;
            p2.lose++;
        }
        if (p1.cjb == 'B' && p2.cjb == 'C')
        {
            p1.b_win++;
            p2.lose++;
        }
        if (p1.cjb == 'B' && p2.cjb == 'J')
        {
            p1.lose++;
            p2.j_win++;
        }
        if (p1.cjb == 'B' && p2.cjb == 'B')
        {
            p1.equ++;
            p2.equ++;
        }
    }
    cout << p1.b_win + p1.c_win + p1.j_win << " " << p1.equ << " " << p1.lose << endl;
    cout << p2.b_win + p2.c_win + p2.j_win << " " << p2.equ << " " << p2.lose << endl;

    if (p1.b_win >= p1.c_win && p1.b_win >= p1.j_win)
        cout << "B ";
    else if (p1.c_win >= p1.b_win && p1.c_win >= p1.j_win)
        cout << "C ";
    else
        cout << "J ";
    if (p2.b_win >= p2.c_win && p2.b_win >= p2.j_win)
        cout << "B";
    else if (p2.c_win >= p2.b_win && p2.c_win >= p2.j_win)
        cout << "C";
    else
        cout << "J";

    return 0;
}