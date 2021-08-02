#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> a(N, vector<int>(M, 0));
    vector<int> b(M, 0);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a.at(i).at(j);
            // cout << "cout" << endl;
            // cout << a.at(i).at(j) << ' ';
        }
        //cout << endl;
    }

    for (int j = 0; j < M; j++)
    {
        cin >> b.at(j);
        // cout << "cout" << endl;
        // cout << b.at(j) << endl;
    }

    int work = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            work += a.at(i).at(j) * b.at(j);
        }
        cout << work << endl;
        work = 0;
    }
}
