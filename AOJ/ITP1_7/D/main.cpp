#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l;
    cin >> n >> m >> l;
    long long c;

    vector<vector<int>> A(n, vector<int>(m, 0));
    vector<vector<int>> B(m, vector<int>(l, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A.at(i).at(j);
        }
    }
    // cout << "a" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> B.at(i).at(j);
        }
    }
    // cout << "b" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            c = 0;

            for (int k = 0; k < m; k++)
            {
                c += A.at(i).at(k) * B.at(k).at(j);
            }
            // cout << "c" << endl;
            if (j == l - 1)
            {
                cout << c << endl;
            }
            else
            {
                cout << c << " ";
            }
            // cout << "e" << endl;
        }
    }
}
