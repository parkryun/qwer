//#include <iostream>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//using namespace std;
//
//bool canCompleteInSemesters(int subject, const vector<vector<int>>& graph, vector<int>& semesters, int maxSemesters) {
//    if (semesters[subject] != -1) {
//        return semesters[subject] <= maxSemesters;
//    }
//
//    int maxPreSemester = 0;
//    for (int prereq : graph[subject]) {
//        if (!canCompleteInSemesters(prereq, graph, semesters, maxSemesters)) {
//            return false;
//        }
//        maxPreSemester = max(maxPreSemester, semesters[prereq]);
//    }
//
//    semesters[subject] = maxPreSemester + 1;
//    return semesters[subject] <= maxSemesters;
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
//        int N, K, M;
//        cin >> N >> K >> M;
//
//        vector<vector<int>> graph(K + 1);
//        for (int i = 0; i < M; ++i) {
//            int a, b;
//            cin >> a >> b;
//            graph[b].push_back(a);
//        }
//
//        int Q;
//        cin >> Q;
//
//        vector<int> semesters(K + 1, -1);
//        while (Q--) {
//            int query;
//            cin >> query;
//
//            if (canCompleteInSemesters(query, graph, semesters, N)) {
//                cout << "True\n";
//            }
//            else {
//                cout << "False\n";
//            }
//        }
//    }
//
//    return 0;
//}
