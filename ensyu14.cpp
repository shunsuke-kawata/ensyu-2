//N進数の桁和
/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;


int func(int a, int b) {
	int ans = 0;
	while (a > 0) {
		ans += a % b;
		a /= b;
	}
	return ans;

}

int main() {
	int N;
	cin >> N;
	int a[100], b[100];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> b[i];
	}

	for (int j = 0; j < N; j++) {
		cout << func(a[j], b[j]) << " ";
	}
	

	return 0;
}
