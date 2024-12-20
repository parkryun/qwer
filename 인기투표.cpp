//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int getMinimumTransfers(int n, vector<int>& stickers) {
//    priority_queue<int> pq; // 최대 힙
//    int inha = stickers[0]; // 기호 1번의 스티커 개수
//    int transfers = 0;
//
//    // 나머지 후보들의 스티커 개수를 최대 힙에 추가
//    for (int i = 1; i < n; ++i) {
//        pq.push(stickers[i]);
//    }
//
//    // 기호 1번이 단독 1위가 될 때까지 반복
//    while (!pq.empty() && pq.top() >= inha) {
//        int maxStickers = pq.top();
//        pq.pop();
//
//        // 스티커 하나를 옮김
//        maxStickers--;
//        inha++;
//        transfers++;
//
//        // 옮긴 후 다시 힙에 삽입
//        pq.push(maxStickers);
//    }
//
//    return transfers;
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
//        int n;
//        cin >> n;
//
//        vector<int> stickers(n);
//        for (int i = 0; i < n; ++i) {
//            cin >> stickers[i];
//        }
//
//        int result = getMinimumTransfers(n, stickers);
//        cout << result << "\n";
//    }
//
//    return 0;
//}
