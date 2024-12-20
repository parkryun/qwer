//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//void josephus(int N, int K) {
//    queue<int> q;
//
//    // ť�� 1���� N������ ���ڸ� ������� �ֽ��ϴ�.
//    for (int i = 1; i <= N; i++) {
//        q.push(i);
//    }
//
//    while (!q.empty()) {
//        // K�� ȸ�� (������ �κ�)
//        for (int i = 0; i < K; i++) {
//            int temp = q.front();
//            q.pop();
//            q.push(temp);
//        }
//
//        // ���� ��� ���
//        cout << q.front() << " ";
//        q.pop();
//    }
//    cout << "\n";
//}
//
//int main() {
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int N, K;
//        cin >> N >> K;
//        josephus(N, K);
//    }
//
//    return 0;
//}