//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int min_edit_distance(const string& s1, const string& s2) {
//    int n = s1.size();
//    int m = s2.size();
//
//    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//
//    // 초기 조건
//    for (int i = 0; i <= n; ++i) dp[i][0] = i; // 삭제
//    for (int j = 0; j <= m; ++j) dp[0][j] = j; // 삽입
//
//    // DP 계산
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if (s1[i - 1] == s2[j - 1]) {
//                dp[i][j] = dp[i - 1][j - 1]; // 문자가 같으면 비용 증가 없음
//            }
//            else {
//                dp[i][j] = min({ dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j] }) + 1;
//            }
//        }
//    }
//
//    return dp[n][m];
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T;
//    cin >> T;
//
//    while (T--) {
//        string s1, s2;
//        cin >> s1 >> s2;
//
//        cout << min_edit_distance(s1, s2) << "\n";
//    }
//
//    return 0;
//}
