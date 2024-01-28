// 大富豪
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <cstdio>

using namespace std;

class card
{
public:
    // int number[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };//カード番号
    int before[13] = {12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // 通常時の強さ
    int after[13] = {2, 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3};  // 革命後の強さ
};

int main()
{
    int N;
    cin >> N;
    int b[10];
    int bef = 0, aft = 0;
    card T;

    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }

    for (int j = 0; j < N; j++)
    {
        bef += T.before[b[j] - 1];
        aft += T.after[b[j] - 1];
    }

    if (bef == aft)
    {
        cout << "Even" << endl;
    }
    else if (aft > bef)
    {
        cout << "Strong" << endl;
    }
    else
    {
        cout << "Weak" << endl;
    }

    // カード表の定義
    return 0;
}