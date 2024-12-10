#include <bits/stdc++.h>
using namespace std;

// Student struct to hold the student data
struct Student
{
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

// Comparator function to compare two students
bool compare(Student a, Student b)
{
    if (a.eng_marks > b.eng_marks)
    {
        return true;
    }
    else if (a.eng_marks < b.eng_marks)
    {
        return false;
    }
    else if (a.math_marks > b.math_marks)
    {
        return true;
    }
    else if (a.math_marks < b.math_marks)
    {
        return false;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int N;
    cin >> N; // Read number of students

    // Array of students
    Student students[N];

    // Read data for N students
    for (int i = 0; i < N; ++i)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    // Sort the students using the custom comparator
    sort(students, students + N, compare);

    // Output the sorted student data
    for (int i = 0; i < N; ++i)
    {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << " "
             << students[i].math_marks << " "
             << students[i].eng_marks << endl;
    }

    return 0;
}
