#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    string s;
    bool flg = false;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++)
    {

        // cout << "str1.substr(i): " << str1.substr(i) << endl;
        // cout << "str1.substr(0, i): " << str1.substr(0, i) << endl;

        s = str1.substr(i);
        s += str1.substr(0, i);

        // cout << "s: " << s << endl;

        if (s.find(str2) != string::npos)
        {
            flg = true;
        }
    }

    if (flg == false)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}
