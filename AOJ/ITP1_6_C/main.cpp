#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int b, f, r, v;

    vector<vector<vector<int>>> vec(4, vector<vector<int>>(3, vector<int>(10, 0)));

    for (int i = 0; i < N; i++)
    {
        cin >> b >> f >> r >> v;
        vec.at(b - 1).at(f - 1).at(r - 1) += v;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                // cout << 'i' << i << ' ';
                // cout << 'j' << j << ' ';
                // cout << 'k' << k << endl;
                if (k == 9)
                {
                    cout << ' ' << vec.at(i).at(j).at(k) << endl;
                }
                else
                {
                    cout << ' ' << vec.at(i).at(j).at(k);
                }
            }
        }
        if (i < 3)
        {
            cout << "####################" << endl;
        }
    }
}
