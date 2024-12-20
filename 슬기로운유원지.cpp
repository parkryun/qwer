//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int N, M;
//        cin >> N >> M;
//
//        vector<int> times(N);
//        vector<int> happiness(N);
//
//        for (int i = 0; i < N; ++i) {
//            cin >> times[i];
//        }
//        for (int i = 0; i < N; ++i) {
//            cin >> happiness[i];
//        }
//
//        vector<int> dp(M + 1, 0);
//
//        for (int i = 0; i < N; ++i) {
//            for (int j = M; j >= times[i]; --j) {
//                dp[j] = max(dp[j], dp[j - times[i]] + happiness[i]);
//            }
//        }
//
//        cout << dp[M] << "\n";
//    }
//
//    return 0;
//}
