// 環状線だよ！Techちゃん！
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>

using namespace std;

int main()
{

    long long N, M, X, a;
    cin >> N >> M >> X;

    for (int i = 1; i <= M; i++)
    {
        long long a;
        cin >> a;

        if (i % 2 == 1)
        {
            X += a;
            if (X > N)
            {
                while (X > N)
                {
                    X -= N;
                }
            }
        }
        else
        {
            X -= a;
            if (X <= 0)
            {
                while (X <= 0)
                {
                    X += N;
                }
            }
        }
    }

    cout << X << endl;
    return 0;
}