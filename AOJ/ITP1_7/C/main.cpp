#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> vec(r + 1, vector<int>(c + 1, 0));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> vec.at(i).at(j);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            vec.at(i).at(c) += vec.at(i).at(j);
        }
    }

    for (int j = 0; j < c + 1; j++)
    {
        for (int i = 0; i < r; i++)
        {
            vec.at(r).at(j) += vec.at(i).at(j);
        }
    }

    for (int i = 0; i < r + 1; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            if (j == c)
            {
                cout << vec.at(i).at(j) << endl;
            }
            else
            {
                cout << vec.at(i).at(j) << " ";
            }
        }
    }
}
