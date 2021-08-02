#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string work;
    int m;
    int h;

    while (true)
    {
        cin >> str;

        if (str == "-")
        {
            break;
        }

        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> h;
            // cout << i << endl;
            // cout << str.substr(0, h) << endl;
            // cout << str.substr(h) << endl;
            work = str.substr(h) + str.substr(0, h);
            str = work;
        }
        cout << str << endl;
    }
}
