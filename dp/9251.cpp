
#include<cstdio>
#include<algorithm>
using namespace std;
char a[1002], b[1002];
int dp[1001][1001], i, j;
int main() {
    scanf("%s %s", a + 1, b + 1);

   // for (i = 1; a[i]; i++) printf("%c", a[i]);

    for (i = 1; a[i]; i++) {
        for (j = 1; b[j]; j++) {
            if (a[i] == b[j]) {
                dp[i][j] = dp[i - 1][j - 1]+1;
            }
            else {
                dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j] });
            }
        }
    }
    printf("%d", dp[i - 1][j - 1]);
    return 0;
}
