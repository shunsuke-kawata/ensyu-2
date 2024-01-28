// 不思議なトランポリン
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>

using namespace std;

int main()
{

    long int H, N;

    cin >> H >> N;

    while (N > 0)
    {
        H = H * 2;
        H = H % 1000000007;
        N--;
    }

    cout << H << endl;

    return 0;
}