//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int getMinimumTransfers(int n, vector<int>& stickers) {
//    priority_queue<int> pq; // �ִ� ��
//    int inha = stickers[0]; // ��ȣ 1���� ��ƼĿ ����
//    int transfers = 0;
//
//    // ������ �ĺ����� ��ƼĿ ������ �ִ� ���� �߰�
//    for (int i = 1; i < n; ++i) {
//        pq.push(stickers[i]);
//    }
//
//    // ��ȣ 1���� �ܵ� 1���� �� ������ �ݺ�
//    while (!pq.empty() && pq.top() >= inha) {
//        int maxStickers = pq.top();
//        pq.pop();
//
//        // ��ƼĿ �ϳ��� �ű�
//        maxStickers--;
//        inha++;
//        transfers++;
//
//        // �ű� �� �ٽ� ���� ����
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
