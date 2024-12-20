//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//void josephus(int N, int K) {
//    queue<int> q;
//
//    // 큐에 1부터 N까지의 숫자를 순서대로 넣습니다.
//    for (int i = 1; i <= N; i++) {
//        q.push(i);
//    }
//
//    while (!q.empty()) {
//        // K번 회전 (수정된 부분)
//        for (int i = 0; i < K; i++) {
//            int temp = q.front();
//            q.pop();
//            q.push(temp);
//        }
//
//        // 뽑힌 사람 출력
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