#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    long long min = 0;
    long long max = 0;
    long long sum = 0;

    cin >> n;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    min = a.at(0);
    max = a.at(0);
    sum = 0;

    for (long long i = 0; i < n; i++)
    {
        if (min > a.at(i))
        {
            min = a.at(i);
        }

        if (a.at(i) > max)
        {
            max = a.at(i);
        }

        sum += a.at(i);
    }

    cout << min << ' ' << max << ' ' << sum << endl;
}
