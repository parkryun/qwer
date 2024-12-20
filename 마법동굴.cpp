//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//
//// ���� ���� (��, ��, ��, ��)
//const int dx[4] = { -1, 1, 0, 0 };
//const int dy[4] = { 0, 0, -1, 1 };
//
//int bfs(const vector<vector<char>>& grid, int startX, int startY, int exitX, int exitY) {
//    int n = grid[0].size(); // ���� ����
//    int m = grid.size();    // ���� ����
//    vector<vector<bool>> visited(m, vector<bool>(n, false));
//    queue<tuple<int, int, int>> q; // x, y, �̵� �Ÿ�
//
//    q.push(make_tuple(startX, startY, 0));
//    visited[startY][startX] = true;
//
//    while (!q.empty()) {
//        tuple<int, int, int> current = q.front();
//        q.pop();
//
//        int x = get<0>(current);
//        int y = get<1>(current);
//        int dist = get<2>(current);
//
//        // Ż�ⱸ�� �����ϸ� �Ÿ� ��ȯ
//        if (x == exitX && y == exitY) {
//            return dist;
//        }
//
//        // �����¿�� �̵�
//        for (int i = 0; i < 4; ++i) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[ny][nx] && grid[ny][nx] == 'O') {
//                visited[ny][nx] = true;
//                q.push(make_tuple(nx, ny, dist + 1));
//            }
//        }
//    }
//
//    return -1; // Ż�� �Ұ���
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T; // �׽�Ʈ ���̽� ��
//    cin >> T;
//
//    while (T--) {
//        int n, m;
//        cin >> n >> m;
//
//        int startX, startY, exitX, exitY;
//        cin >> startX >> startY >> exitX >> exitY;
//
//        vector<vector<char>> grid(m, vector<char>(n));
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                cin >> grid[i][j];
//            }
//        }
//
//        // BFS�� ���� �ּ� �Ÿ� ���
//        int result = bfs(grid, startX, m - startY - 1, exitX, m - exitY - 1);
//        cout << result << "\n";
//    }
//
//    return 0;
//}
