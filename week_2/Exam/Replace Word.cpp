#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S, X;
        cin >> S >> X;

        string result = " ";
        int i = 0;
        int m = X.size();

        while (i < S.size())
        {
            if (i + m <= S.size() && S.substr(i, m) == X)
            {
                result += "#";
                i += m;
            }
            else
            {
                result += S[i];
                i++;
            }
        }

        cout << result << endl;
    }
}

int main()
{
    solve();
    return 0;
}
