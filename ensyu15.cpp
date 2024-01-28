// Lake Investigation
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>

using namespace std;

int main()
{
    int A, L, B;

    cin >> A >> L;
    B = (L - 2 * A) / 2;
    cout << B << endl;
    return 0;
}