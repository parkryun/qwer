//#include <iostream>
//#include <vector>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//
//// 방향 벡터 (상, 하, 좌, 우)
//const int dx[4] = { -1, 1, 0, 0 };
//const int dy[4] = { 0, 0, -1, 1 };
//
//int bfs(const vector<vector<char>>& grid, int startX, int startY, int exitX, int exitY) {
//    int n = grid[0].size(); // 가로 길이
//    int m = grid.size();    // 세로 길이
//    vector<vector<bool>> visited(m, vector<bool>(n, false));
//    queue<tuple<int, int, int>> q; // x, y, 이동 거리
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
//        // 탈출구에 도달하면 거리 반환
//        if (x == exitX && y == exitY) {
//            return dist;
//        }
//
//        // 상하좌우로 이동
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
//    return -1; // 탈출 불가능
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int T; // 테스트 케이스 수
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
//        // BFS를 통해 최소 거리 계산
//        int result = bfs(grid, startX, m - startY - 1, exitX, m - exitY - 1);
//        cout << result << "\n";
//    }
//
//    return 0;
//}
