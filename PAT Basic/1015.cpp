#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
    string id;
    int dscore;
    int cscore;
    int sum;
};

bool compareStudent(Student &s1, Student &s2)
{
    if (s1.sum == s2.sum)
    {
        if (s1.dscore == s2.dscore)
            return s1.id < s2.id;
        return s1.dscore > s2.dscore;
    }
    return s1.sum > s2.sum;
}

void myPrint(vector<Student> &v)
{
    for (vector<Student>::iterator it = v.begin(); it != v.end(); it++)
        cout << it->id << " " << it->dscore << " " << it->cscore << endl;
}

int main()
{
    int n, l, h;
    cin >> n >> l >> h;
    vector<Student> v;
    int passnum = 0;
    for (int i = 0; i < n; i++)
    {
        Student s;
        cin >> s.id >> s.dscore >> s.cscore;
        s.sum = s.cscore + s.dscore;
        if (s.cscore >= l && s.dscore >= l)
        {
            passnum++;
            v.push_back(s);
        }
    }
    cout << passnum << endl;
    vector<Student> v_first;
    vector<Student> v_second;
    vector<Student> v_third;
    vector<Student> v_fourth;
    for (vector<Student>::iterator it = v.begin(); it != v.end(); it++)
    {
        if (it->cscore >= h && it->dscore >= h)
            v_first.push_back(*it);
        else if (it->cscore < h && it->dscore >= h)
            v_second.push_back(*it);
        else if (it->cscore < h && it->dscore < h && it->dscore >= it->cscore)
            v_third.push_back(*it);
        else
            v_fourth.push_back(*it);
    }

    sort(v_first.begin(), v_first.end(), compareStudent);
    sort(v_second.begin(), v_second.end(), compareStudent);
    sort(v_third.begin(), v_third.end(), compareStudent);
    sort(v_fourth.begin(), v_fourth.end(), compareStudent);

    myPrint(v_first);
    myPrint(v_second);
    myPrint(v_third);
    myPrint(v_fourth);

    return 0;
}