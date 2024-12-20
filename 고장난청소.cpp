//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int N, M;
//        cin >> N >> M;
//
//        vector<vector<int>> grid(N, vector<int>(M));
//        vector<vector<int>> dp(N, vector<int>(M, 0));
//        int totalItems = 0;
//
//        // 입력 및 물품 총합 계산
//        for (int i = 0; i < N; ++i) {
//            for (int j = 0; j < M; ++j) {
//                cin >> grid[i][j];
//                totalItems += grid[i][j];
//            }
//        }
//
//        // DP 초기화
//        dp[0][0] = grid[0][0];
//
//        // 첫 번째 행 초기화
//        for (int j = 1; j < M; ++j) {
//            dp[0][j] = dp[0][j - 1] + grid[0][j];
//        }
//
//        // 첫 번째 열 초기화
//        for (int i = 1; i < N; ++i) {
//            dp[i][0] = dp[i - 1][0] + grid[i][0];
//        }
//
//        // DP 점화식 계산
//        for (int i = 1; i < N; ++i) {
//            for (int j = 1; j < M; ++j) {
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
//            }
//        }
//
//        // 최대 치운 물품 수
//        int maxCleaned = dp[N - 1][M - 1];
//
//        // 결과 계산 및 출력
//        cout << totalItems - maxCleaned << '\n';
//    }
//
//    return 0;
//}
