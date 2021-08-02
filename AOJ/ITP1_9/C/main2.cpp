#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    string str1, str2;
    int point1 = 0, point2 = 0;
    int score1 = 0, score2 = 0;

    // cin >> n;
    // for (int i; i < n; i++)

    point1 = 0;
    point2 = 0;

    cin >> str1 >> str2;

    // cout << "n: " << n << endl;
    // cout << "i: " << i << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    cout << "str1.size(): " << str1.size() << endl;
    cout << "str2.size(): " << str2.size() << endl;

    //辞書順計算
    for (int j = 0; j < str1.size(); j++)
    {
        point1 += (str1.at(j) - 'a' + 1) * (pow(10, j));
        cout << "pow(10, j): " << pow(10, j) << endl;
    }

    cout << "point1: " << point1 << endl;

    for (int k = 0; k < str2.size(); k++)
    {
        point2 += (str2.at(k) - 'a' + 1) * (pow(10, k));
        cout << "pow(10, k): " << pow(10, k) << endl;
    }

    cout << "point2: " << point2 << endl;

    //桁数を同じにする
    if (str1.size() == str2.size())
    {
        /* code */
    }
    else if (str1.size() > str2.size())
    {
        point2 *= (pow(10, (str1.size() - str2.size())));
    }
    else if (str1.size() < str2.size())
    {
        point1 *= (pow(10, (str2.size() - str1.size())));
    }

    cout << "point1: " << point1 << endl;
    cout << "point2: " << point2 << endl;

    //判定→勝者に１ポイント追加
    if (point1 == point2)
    {
        score1 += 1;
        score2 += 1;
    }
    else if (point1 > point2)
    {
        score1 += 3;
    }
    else if (point1 < point2)
    {
        score2 += 3;
    }

    // 出力
    cout << score1 << " " << score2 << endl;
}
