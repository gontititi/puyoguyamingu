#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b = 0;
    string op;
    int flg = 0;

    while (0 >= flg)
    {
        cin >> a >> op >> b;

        if (op == "+")
        {
            cout << a + b << endl;
        }
        if (op == "*")
        {
            cout << a * b << endl;
        }
        if (op == "/")
        {
            cout << a / b << endl;
        }
        if (op == "-")
        {
            cout << a - b << endl;
        }
        if (op == "?")
        {
            flg = 1;
        }
    }
}
