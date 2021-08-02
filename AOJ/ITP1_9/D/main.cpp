#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int q;
    string query, p;
    string work;
    int a, b;
    int c;

    cin >> str >> q;

    // cout << "str: " << str << endl;
    // cout << "q: " << q << endl;

    for (int i; i < q; i++)
    {
        cin >> query >> a >> b;
        c = b - a + 1;
        if (query == "replace")
        {
            cin >> p;
        }
        else
        {
            p = "";
        }

        if (query == "replace")
        {

            str.replace(a, c, p);
        }
        else if (query == "reverse")
        {
            work = str.substr(a, c);
            reverse(work.begin(), work.end());
            str.replace(a, c, work);
        }
        else if (query == "print")
        {
            cout << str.substr(a, c) << endl;
        }

        // cout << endl
        //      << "query: " << query << " a: " << a << " b: " << b << " p: " << p << endl;

        // cout << " str: " << str << endl;
    }
}
