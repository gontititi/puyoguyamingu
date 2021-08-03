#include <bits/stdc++.h>
using namespace std;

int main()
{
    //整数列を入力pairで持つ a0-0, a1-1
    int N = 5;
    vector<pair<int, int>> vec;
    vector<int> a;
    vector<int> vec2(N, 0);

    a = {12, 43, 7, 15, 9};
    // cout << "a" << endl;

    for (int i = 0; i < N; i++)
    {
        vec.push_back(make_pair(a.at(i), i));
        // cout << vec.at(i).first << " " << vec.at(i).second << endl;
    }

    sort(vec.begin(), vec.end());

    // for (int j; j < N; j++)
    // {
    //     cout << vec.at(j).first << " " << vec.at(j).second << endl;
    // }

    int work;

    for (int k = 0; k < N; k++)
    {
        work = vec.at(k).second;
        vec2.at(work) = k + 1;
    }
    for (int l; l < N; l++)
    {
        cout << vec2.at(l) << endl;
    }
}
