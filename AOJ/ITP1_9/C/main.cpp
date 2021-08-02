#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str1, str2;
    int score1 = 0, score2 = 0;

    cin >> n;
    for (int i; i < n; i++)
    {

        cin >> str1 >> str2;

        //辞書順計算

        //判定→勝者に１ポイント追加
        if (str1 == str2)
        {
            score1 += 1;
            score2 += 1;
        }
        else if (str1 > str2)
        {
            score1 += 3;
        }
        else if (str1 < str2)
        {
            score2 += 3;
        }
    }
    //出力
    cout << score1 << " " << score2 << endl;
}
