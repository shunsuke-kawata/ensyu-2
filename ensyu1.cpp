// number of figures
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string N;
    cin >> N;

    int flag = 1;

    if (N[0] != '1')
    {
        flag = 0;
    }
    for (int i = 1; i < N.size(); i++)
    {
        if (N[i] != '0')
        {
            flag = 0;
        }
    }

    if (flag == true)
    {
        cout << N.size() - 1 << endl;
    }
    else
    {
        cout << N.size() << endl;
    }
    return 0;
}