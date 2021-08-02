#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, s;
    int count = 0;
    cin >> str1;

    while (true)
    {
        cin >> str2;

        // cout << "受け取った文字列は： " << str2 << endl;

        if (str2 == "END_OF_TEXT")
        {
            break;
        }

        for (int i = 0; i < str2.size(); i++)
        {
            str2.at(i) = tolower(str2.at(i));
        }

        if (str2 == str1)
        {
            count += 1;
            // cout << "合致した文字列は： " << str2 << endl;
        }
    }

    cout << count << endl;
}
