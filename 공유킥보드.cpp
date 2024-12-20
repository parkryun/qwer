//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int N, M;
//        cin >> N >> M;
//        int K;
//        cin >> K;
//
//        vector<pair<int, int>> v;
//
//        for (int i = 0; i < K; i++) {
//            int r, c;
//            cin >> r >> c;
//            v.push_back({ r, c });
//        }
//
//        sort(v.begin(), v.end());
//
//        int ans = 0;
//
//        while (v.size()) {
//            int curN = v[0].first, curM = v[0].second;
//            ans++;
//
//            vector<pair<int, int>> tmp;
//            for (int i = 1; i < v.size(); i++) {
//                if (curN <= v[i].first && curM <= v[i].second) {
//                    curN = v[i].first;
//                    curM = v[i].second;
//                }
//                else {
//                    tmp.push_back({ v[i].first, v[i].second });
//                }
//            }
//            v = tmp;
//        }
//        cout << ans << "\n";
//    }
//}