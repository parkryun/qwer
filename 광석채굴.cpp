//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
//void dfs(int curr, int depth, vector<vector<int>>& adj, vector<int>& depths, vector<bool>& visited) {
//    visited[curr] = true;
//    depths[curr] = depth;
//
//    for (int next : adj[curr]) {
//        if (!visited[next]) {
//            dfs(next, depth + 1, adj, depths, visited);
//        }
//    }
//}
//
//void solve() {
//    int n, k;
//    cin >> n >> k;
//
//    // �� ������ �ִ� ���� ��ȣ ����
//    vector<int> minerals(n + 1);
//    for (int i = 1; i <= n; i++) {
//        cin >> minerals[i];
//    }
//
//    // ã���� �ϴ� ���� ��ȣ�� �ش� ������ ��ġ�� ����
//    vector<int> target_minerals(k);
//    map<int, int> mineral_to_space;
//    for (int i = 1; i <= n; i++) {
//        mineral_to_space[minerals[i]] = i;
//    }
//
//    // ã���� �ϴ� ������ �Է�
//    for (int i = 0; i < k; i++) {
//        cin >> target_minerals[i];
//    }
//
//    // �׷��� ����
//    vector<vector<int>> adj(n + 1);
//    int a, b;
//    for (int i = 0; i < n; i++) {
//        cin >> a >> b;
//        adj[a].push_back(b);
//    }
//
//    // DFS�� �� ����� ���� ���
//    vector<int> depths(n + 1, 0);
//    vector<bool> visited(n + 1, false);
//    dfs(0, 0, adj, depths, visited);
//
//    // ��� ���
//    for (int i = 0; i < k; i++) {
//        int space = mineral_to_space[target_minerals[i]];
//        cout << depths[space] << (i == k - 1 ? "\n" : " ");
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    cin >> T;
//    while (T--) {
//        solve();
//    }
//
//    return 0;
//}