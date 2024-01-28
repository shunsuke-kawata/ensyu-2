// Three Sushi
#include <iostream>

using namespace std;

unsigned long long int jun(unsigned long long int n)
{ // n個の中から3つ選ぶ
    return n * (n - 1) * (n - 2) / 6;
}
unsigned long long int jun2(unsigned long long int n)
{ // n個の中から2つ選ぶ
    return n * (n - 1) / 2;
}

int main()
{
    int N;

    unsigned long long int array[4] = {0, 0, 0, 0}; // あまりの個数を格納
    int a;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        a %= 3;
        array[a]++; // 3で割ったあまりの数
    }

    unsigned long long int sum = 0; // 皿の通り数を追加する変数

    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            for (int k = j; k < 4; k++)
            {
                if (array[i] > 0 && array[j] > 0 && array[k] > 0)
                {
                    if ((i + j + k) % 3 == 0)
                    { // 皿のおいしさを3で割ったあまり
                        if (i == j && j == k)
                        {
                            sum += jun(array[i]);
                        }
                        else if (i != j && j == k)
                        { // jとkのおいしさのあまりが一致する
                            sum += jun2(array[j]) * array[i];
                        }
                        else if (j != k && k == i)
                        { // kとiのおいしさのあまりが一致する
                            sum += jun2(array[k]) * array[j];
                        }
                        else if (k != i && i == j)
                        { // iとjのおいしさのあまりが一致する
                            sum += jun2(array[i]) * array[k];
                        }
                        else
                        {
                            sum += array[i] * array[j] * array[k];
                        }
                    }
                }
            }
        }
    }

    cout << sum << endl;

    return 0;
}