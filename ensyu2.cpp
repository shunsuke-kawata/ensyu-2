// 割って割ってまた割って
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>

using namespace std;

double roundn(double N)
{
    N = N * pow(10, 5);
    N = round(N);
    N = N / pow(10, 5);
    return N;
}

int main()
{

    double N;
    int M, K;
    cin >> N >> M >> K;

    for (int i = 0; i < K; i++)
    {
        N = N / M;
    }

    N = roundn(N);

    printf("%.4f", N);

    return 0;
}