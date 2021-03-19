/*#include<cstdio>
#include <iostream>
#include<algorithm>
using namespace std;

int n[100001];
int dp[100001];
int num,big;
int main() {
	cin >> num;
	for (int i = 0; i<num; i++)cin >> n[i];

	big = n[0];
	dp[0] = n[0];
	for (int j = 1;j<num; j++) {
		dp[j] = max(n[j], dp[j - 1] + n[j]);
		big = max(big, dp[j]);
	}
	cout << big;



}*/