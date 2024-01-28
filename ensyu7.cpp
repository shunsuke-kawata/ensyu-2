//Techちゃんと猫と犬
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include<iostream>
#include<string>

using namespace std;


int main() {
	long int H, W;
	cin >> H >> W;
	if (H >= W) {
		cout << W << endl;
	}
	else {
		cout << H << endl;
	}
	return 0;
}