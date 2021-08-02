#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Grading

    int m, f, r;
    bool flg = false;

    while (flg == false)
    {

        cin >> m >> f >> r;
        // cout << m << f << r << endl;

        if (m == -1 and f == -1 and r == -1)
        {
            // flg = true;
            break;
        }

        if (m == -1 or f == -1)
        {
            cout << "F" << endl;
            continue;
        }

        if (m + f >= 80)
        {
            cout << "A" << endl;
        }

        if (m + f >= 65 and m + f < 80)
        {
            cout << "B" << endl;
        }

        if (m + f >= 50 and m + f < 65)
        {
            cout << "C" << endl;
        }

        if (m + f >= 30 and m + f < 50 and r >= 50)
        {
            cout << "C" << endl;
        }

        if (m + f >= 30 and m + f < 50 and r < 50)
        {
            cout << "D" << endl;
        }

        if (m + f < 30 and m + f >= 0)
        {
            cout << "F" << endl;
        }
    }
}
