//Techちゃんとおさんぽ
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include<iostream>

using namespace std;

int main() {

	int N;

	int flag = 1;    //現在位置
	cin >> N;

	int i = 1;
	while (i<= N) {
		flag += flag;
		if (flag > N) {
			flag = flag % N;
		}

		if (flag == 1) {
			cout << "Yes" << endl;
			break;
		}
		i++;

		
	}
	if (flag != 1) {
		cout << "No" << endl;
	}
	

	return 0;
}