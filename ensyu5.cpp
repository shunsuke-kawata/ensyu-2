// Techちゃんの白黒魔法
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>

using namespace std;

unsigned long int magic(unsigned long int l, unsigned long int m)
{

    if (l < 2 && m < 2)
    {
        return l + m;
    }
    else
    {
        unsigned long int half;
        if (l >= m)
        {
            half = l / 2;
            l = l - half * 2;
            m = m + half;
        }
        else
        {
            half = m / 2;
            m = m - half * 2;
            l = l + half;
        }

        return magic(l, m);
    }
}

int main()
{

    int N;
    long int W[1000], B[1000];

    cin >> N; // 回数を定義

    for (int i = 0; i < N; i++)
    {
        cin >> W[i] >> B[i];
    }
    for (int j = 0; j < N; j++)
    {
        cout << magic(W[j], B[j]) << endl;
    }

    return 0;
};