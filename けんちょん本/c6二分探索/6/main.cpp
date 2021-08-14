#include <bits/stdc++.h>
using namespace std;

auto func(double t, int A, int B, int C)
{
    if (abs(A * t + B * sin(C * t * M_PI) - 100) <= pow(10, -6))
    {
        return 999;
    }
    else
    {
        return 888;
    }
}

auto f(double t, int A, int B, int C)
{
    return A * t + B * sin(C * t * M_PI);
}

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    double t;
    cin >> t;

    cout << f(t, A, B, C) << endl;
    cout << func(t, A, B, C) << endl;
}
