#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    string S;
    int num = 0;
    vector<int> counter(26, 0);

    // getline(cin, S);
    while (cin >> s)
    {
        // for (int i = 0; i < S.size(); i++)
        // {
        // s = S.at(i);
        s = tolower(s);
        num = (s - 'a');

        if (not(num > -1 and num < 26))
        {
            continue;
        }

        counter.at(num) += 1;
        // }
    }

    for (int j; j < 26; j++)
    {
        printf("%c : %d\n", j + 'a', counter.at(j));
    }
}
