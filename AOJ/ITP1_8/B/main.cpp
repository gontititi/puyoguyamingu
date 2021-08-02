#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    bool flg = false;
    int sum = 0;

    while (flg == false)
    {
        cin >> S;

        if (S == "0")
        {
            flg = true;
            break;
        }

        sum = 0;
        for (int i = 0; i < S.size(); i++)
        {
            sum += int(S.at(i) - '0');
        }

        cout << sum << endl;
    }
}
