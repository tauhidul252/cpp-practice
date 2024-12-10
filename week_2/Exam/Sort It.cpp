#include <bits/stdc++.h>

using namespace std;

struct Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool compare(Student a, Student b)
{
    if (a.total_marks > b.total_marks)
    {
        return true;
    }
    else if (a.total_marks < b.total_marks)
    {
        return false;
    }
    else
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int N;
    cin >> N;

    Student students[100];

    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    sort(students, students + N, compare);

    for (int i = 0; i < N; ++i)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
