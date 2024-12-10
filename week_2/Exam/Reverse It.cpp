#include <bits/stdc++.h>

using namespace std;

struct Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student S[100];

    for (int i = 0; i < N; ++i)
    {
        cin >> S[i].name >> S[i].cls >> S[i].section >> S[i].id;
    }

    for (int i = 0; i < N / 2; ++i)
    {
        char temp = S[i].section;
        S[i].section = S[N - i - 1].section;
        S[N - i - 1].section = temp;
    }

    for (int i = 0; i < N; ++i)
    {
        cout << S[i].name << " " << S[i].cls << " " << S[i].section << " " << S[i].id << endl;
    }

    return 0;
}
