#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string k;
    int work1;
    int work2;

    cin >> N;

    vector<vector<int>> vec(4, vector<int>(13, -1));
    for (int i = 0; i < N; i++)
    {
        cin >> k >> work2;
        work2 += -1;

        if (k == "S")
        {
            work1 = 0;
        }
        if (k == "H")
        {
            work1 = 1;
        }
        if (k == "C")
        {
            work1 = 2;
        }
        if (k == "D")
        {
            work1 = 3;
        }
        vec.at(work1).at(work2) = 1;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (vec.at(i).at(j) == -1)
            {
                if (i == 0)
                {
                    k = "S";
                }
                if (i == 1)
                {
                    k = "H";
                }
                if (i == 2)
                {
                    k = "C";
                }
                if (i == 3)
                {
                    k = "D";
                }
                cout << k << ' ' << j + 1 << endl;
            }
        }
    }
}
