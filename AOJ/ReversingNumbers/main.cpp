#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }

    for (int j = N - 1; j >= 0; j--)
    {
        if (j == 0)
        {
            cout << vec.at(j) << endl;
        }
        else
        {
            cout << vec.at(j) << ' ';
        }
    }
}
