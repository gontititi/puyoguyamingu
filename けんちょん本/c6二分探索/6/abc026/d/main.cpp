#include <bits/stdc++.h>
using namespace std;

bool func(double t, int A, int B, int C)
{
    if (abs(A * t + B * sin(C * t * M_PI) - 100) <= pow(10, -6))
    {
        return true;
    }
    else
    {
        return false;
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

    double left = 0, right = 200;
    double mid;
    bool flg = false;

    for (int i = 0; i < 100; i++)
    {
        mid = (left + right) / 2;

        if (f(mid, A, B, C) - 100 > 0)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout << fixed << setprecision(15) << mid << endl;
}
