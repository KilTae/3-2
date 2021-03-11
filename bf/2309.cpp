#include <iostream>
#include <algorithm>
using namespace std;

int total;
int sum[9];
int main() {
	for (int i = 0; i < 9; i++) {
		cin >> sum[i];
		total += sum[i];
	}
	sort(sum, sum + 9);

	for (int a = 0; a < 9; a++) {
		for (int b = a + 1; b < 9; b++) {
			if ((total - sum[a] - sum[b]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k==a || k==b)continue;
					cout << sum[k] << '\n';
					

				}
				return 0;
			}
		}
	}
}
