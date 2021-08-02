#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    for (int i = 0; i < S.size(); i++)
    {
        if (islower(S.at(i)))
        {
            S.at(i) = toupper(S.at(i));
            // cout << S.at(i) << endl;
        }
        else if (isupper(S.at(i)))
        {
            S.at(i) = tolower(S.at(i));
            // cout << S.at(i) << endl;
        }
    }

    cout << S << endl;
}
