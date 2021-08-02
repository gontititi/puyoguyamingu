#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    int out = 0;
    int count = 0;
    int work = 0;

    bool flg = false;

    while (flg == false)
    {
        out = 0;
        count = 0;

        cin >> n >> x;

        if (n == 0 and x == 0)
        {
            break;
        }

        for (long long bit = 1; bit < (1 << n); bit++)
        {
            // cout << "bitの値_１０：";
            // cout << bit << endl;

            // cout << "bitの値_２：";
            // cout << bitset<8>(bit) << endl;

            out = 0;
            work = 0;

            for (int i = 0; i <= n; i++)
            {

                if (bit & (1 << i))
                {
                    // cout << "bit列挙合格：";
                    // cout << i << endl;
                    out = out + (i + 1);
                    work += 1;
                }
            }
            // cout << "out：";
            // cout << out << endl;

            if (out == x and work == 3)
            {
                count += 1;
                // cout << "count：";
                // cout << count << endl;
            }
        }

        cout << count << endl;
    }
}
