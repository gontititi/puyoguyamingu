#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long H, W;
    int flg = 0;

    while (flg <= 0)
    {
        cin >> H >> W;

        if (H == 0 and W == 0)
        {
            flg = 1;
        }

        for (long long i = 0; i < H; i++)
        {
            for (long long j = 0; j < W; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
