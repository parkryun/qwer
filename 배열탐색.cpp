//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool binarySearchRow(const vector<int>& row, int target) {
//    int left = 0, right = row.size() - 1;
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (row[mid] == target) {
//            return true;
//        }
//        else if (row[mid] < target) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//    return false;
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
//        int N, M;
//        cin >> N >> M;
//
//        vector<vector<int>> matrix(N, vector<int>(M));
//        for (int i = 0; i < N; ++i) {
//            for (int j = 0; j < M; ++j) {
//                cin >> matrix[i][j];
//            }
//        }
//
//        int Q;
//        cin >> Q;
//        vector<int> queries(Q);
//        for (int i = 0; i < Q; ++i) {
//            cin >> queries[i];
//        }
//
//        for (int query : queries) {
//            bool found = false;
//            for (int i = 0; i < N; ++i) {
//                if (query >= matrix[i][0] && query <= matrix[i][M - 1]) {
//                    if (binarySearchRow(matrix[i], query)) {
//                        found = true;
//                        break;
//                    }
//                }
//            }
//            cout << (found ? 1 : 0) << " ";
//        }
//        cout << "\n";
//    }
//
//    return 0;
//}
