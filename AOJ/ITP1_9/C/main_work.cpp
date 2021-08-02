#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str1, str2;
    vector<int> vec1(110, 0);
    vector<int> vec2(110, 0);
    int point1 = 0, point2 = 0;
    int score1 = 0, score2 = 0;

    cin >> n;
    for (int i; i < n; i++)
    {
        point1 = 0;
        point2 = 0;

        cin >> str1 >> str2;

        //辞書順計算
        for (int j = 0; j < str1.size(); j++)
        {
            vec1.at(j) = (str1.at(j) - 'a' + 1);
        }

        for (int k = 0; k < str2.size(); k++)
        {
            vec2.at(k) = (str2.at(k) - 'a' + 1);
        }

        int iter = 0;
        (str1.size() > str2.size()) ? (iter = str1.size()) : (iter = str2.size());

        for (int i = 0; i < iter; i++)
        {
            point1 = vec1.at(i);
            point2 = vec2.at(i);
            //判定→勝者に１ポイント追加
            if (point1 == point2)
            {
                if (i == iter - 1)
                {
                    score1 += 1;
                    score2 += 1;
                }
                continue;
            }
            else if (point1 > point2)
            {
                score1 += 3;
                break;
            }
            else if (point1 < point2)
            {
                score2 += 3;
                break;
            }
        }
        // cout << "score1: " << score1 << endl;
        // cout << "score2: " << score2 << endl;
    }
    //出力
    cout << score1 << " " << score2 << endl;
}
