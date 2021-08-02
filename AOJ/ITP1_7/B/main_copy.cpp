#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, x = 9;
    // int out = 0;
    int count = 0;
    // int work = 0;

    bool flg = false;

    while (flg == false)
    {
        // out = 0;
        count = 0;

        cin >> n >> x;

        if (n == 0 and x == 0)
        {
            flg = true;
            break;
        }

        for (int i = n; i >= 2; i--)
        {
            for (int j = i - 1; j >= 1; j--)
            {
                for (int k = j - 1; k > 0; k--)
                {
                    // cout << "=====" << endl;
                    // cout << i << endl
                    //      << j << endl
                    //      << k << endl;
                    // cout << "=====" << endl;
                    // cout << "i+j+k" << endl;
                    // cout << i + j + k << endl;
                    // cout << "=====" << endl;

                    if (i + j + k == x)
                    {
                        count += 1;
                    }
                }
            }
        }
        cout << count << endl;
    }
}
