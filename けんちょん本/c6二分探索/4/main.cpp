#include <bits/stdc++.h>
using namespace std;
int f(int M, vector<int> vec, int min_d)
{
    int CheckPoint = vec.at(0);
    int count = 1;
    for (int j = 0; j < vec.size(); j++)
    {
        if (vec.at(j) - CheckPoint > min_d)
        {
            count += 1;
            CheckPoint = vec.at(j);
        }
    }

    if (count >= M)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{
    int N, M;
    cin >> N >> M;
    int left, right;
    int min_d;

    vector<int> vec(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());

    left = 0;
    right = vec.at(N - 1);

    cout << " min_d = (left + right) / 2: " << (left + right) / 2 << endl;

    while (left <= right)
    {
        min_d = (left + right) / 2;

        if (f(M, vec, min_d) == 1)
        {
            left = min_d + 1;
        }
        else
        {
            right = min_d - 1;
        }

        cout << " left: " << left << endl;
        cout << " right: " << right << endl;
        cout << " min_d " << min_d << endl;
    }
    cout << min_d << endl;
}
