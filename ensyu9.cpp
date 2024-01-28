// Techちゃんと班分け
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long int N, A, B;
    cin >> N >> A >> B;
    if (N % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (A >= B)
        {
            cout << B << endl;
        }
        else
        {
            cout << A << endl;
        }
    }
    return 0;
}