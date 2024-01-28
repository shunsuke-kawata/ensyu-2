// 文字列分離
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string a;

    cin >> a;

    for (int i = 0; i < a.size(); i++)
    {
        if (isalpha(a[i]) != 0)
        {
            cout << a[i];
        }
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {
        if (isdigit(a[i]) != 0)
        {
            cout << a[i];
        }
    }

    return 0;
}