#include <bits/stdc++.h>

using namespace std;

int main()
{
    string  I;

    while (getline(cin,  I))
    {
         I.erase(remove( I.begin(),  I.end(), ' '),  I.end());

        sort( I.begin(),  I.end());

        cout <<  I << endl;
    }

    return 0;
}
