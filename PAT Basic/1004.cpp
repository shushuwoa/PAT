#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
    string m_name;
    string m_num;
    int m_score;
};

int main()
{
    vector<Student> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student s;
        cin >> s.m_name >> s.m_num >> s.m_score;
        v.push_back(s);
    }
    int max = -1, min = 999;
    string maxname, maxid;
    string minname, minid;
    for (vector<Student>::iterator it = v.begin(); it != v.end(); it++)
    {
        if (it->m_score > max)
        {
            max = it->m_score;
            maxname = it->m_name;
            maxid = it->m_num;
        }
        if (it->m_score < min)
        {
            min = it->m_score;
            minname = it->m_name;
            minid = it->m_num;
        }
    }

    cout << maxname << " " << maxid << endl;
    cout << minname << " " << minid << endl;

    return 0;
}