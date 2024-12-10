#include <bits/stdc++.h>

using namespace std;

int main()
{
    string N;
    getline(cin, N);

    stringstream S(N);
    string W;

    while (S >> W)
    {
        if (W == "Jessica")
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;


}
