#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int countDistributions(int N, int M, int K) {
    vector<vector<int>> dp(M + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= M; ++i) {
        vector<int> prefix(N + 1, 0);
        for (int j = 0; j <= N; ++j) {
            prefix[j] = dp[i - 1][j];
            if (j > 0) {
                prefix[j] = (prefix[j] + prefix[j - 1]) % MOD;
            }
        }
        for (int j = 0; j <= N; ++j) {
            dp[i][j] = prefix[j];
            if (j > K) {
                dp[i][j] = (dp[i][j] - prefix[j - K - 1] + MOD) % MOD;
            }
        }
    }

    int totalCount = 0;
    for (int j = 0; j <= N; ++j) {
        totalCount = (totalCount + dp[M][j]) % MOD;
    }

    int invalidCount = 0;
    for (int x = 0; x <= K; ++x) {
        if (x * M <= N) {
            invalidCount = (invalidCount + 1) % MOD;
        }
    }

    return (totalCount - invalidCount + MOD) % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        int result = countDistributions(N, M, K);
        cout << result << endl;
    }

    return 0;
}
