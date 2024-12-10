#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;
    
    while (N--)
    {
        string s, x;

        cin >> s >> x;

        for (int i = 0; i < s.size(); i++)
        {
            int M = s.find(x);

            string O = "#";

            if (M != -1)
            {
                s.replace(M, x.size(), O);
            }
        }

        cout << s << endl;
    }


     return 0;


}