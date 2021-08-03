#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long count = 0;

    vector<long long> a(N, 0);
    vector<long long> b(N, 0);
    vector<long long> c(N, 0);

    for (int i; i < N; i++)
    {
        cin >> a.at(i);
    }

    for (int i; i < N; i++)
    {
        cin >> b.at(i);
    }

    for (int i; i < N; i++)
    {
        cin >> c.at(i);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    // for (int i; i < N; i++)
    // {
    //     cout << " a.at(i): " << a.at(i) << " ";
    // }

    // cout << endl;

    // for (int i; i < N; i++)
    // {
    //     cout << " b.at(i): " << b.at(i) << " ";
    // }
    // cout << endl;
    // for (int i; i < N; i++)
    // {
    //     cout << " c.at(i):  " << c.at(i) << " ";
    // }
    // cout << endl;

    long long key = 0;

    //bのインデックスを決める
    for (int h = 0; h < N; h++)
    {
        key = b.at(h);

        //bの値より小さいaのインデックス
        auto first_a_iter = lower_bound(a.begin(), a.end(), key);
        // int iter_a = *first_a_iter;
        int idx_a = distance(a.begin(), first_a_iter) - 1;

        //bの値より大きいcのインデックス
        auto first_c_iter = upper_bound(c.begin(), c.end(), key);
        // int iter_c = *first_c_iter;
        int idx_c = distance(c.begin(), first_c_iter);

        // cout << "key: " << key << endl;
        // cout << "idx_a: " << idx_a << endl;
        // cout << "idx_c: " << idx_c << endl;

        //インデックスの場合わけ 負orNより大→ありえない
        //０以上かつNより小さい→OK
        if (idx_a < 0 or idx_a > N or idx_c < 0 or idx_c > N)
        {
            continue;
        }
        else
        {
            //個数計算
            count += (idx_a + 1) * (N - idx_c);

            // cout << "iter_c: " << iter_c << endl;
            // cout << "idx_c: " << idx_c << endl;
            // cout << "count: " << count << endl;
        }
    }

    cout << count << endl;
}
