/*#include <iostream>
using namespace std;

const int mod=1e9+7;
long long dp1[1001][1001];
int N, M;
long dp(int n, int m) {
	if (n == 0 || m == 0) return 0;
	if (n == 1 && m == 1) return 1;
	if (dp1[n][m] != -1) return dp1[n][m];

	dp1[n][m] = (dp(n - 1, m) + dp(n - 1, m - 1) + dp(n - 1, m - 1))%mod;
	return dp1[n][m];


}

int main() {
	cin >>N>>M;
	for (int i = 0; i <=N; i++) {
		for (int j = 0; j <= M; j++)dp1[i][j] = -1;

	}


	cout << dp(N, M);

}
}*/