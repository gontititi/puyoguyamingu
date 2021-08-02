#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long N;
    bool flg = false;
    bool workflg = false;
    long long count = 0;

    while (flg == false)
    {
        cin >> N;

        if (N == 0)
        {
            flg = true;
            break;
        }

        count = 0;
        workflg = false;

        while (N > 0)
        {
            cout << count << endl;
            count = count + (N % 10);
            cout << "N/10:" << N / 10 << endl;
            cout << "N%10:" << N % 10 << endl;
            N = N / 10;
        }
        cout << count << endl;
    }
}
