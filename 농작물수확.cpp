//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct Crop {
//    int index;
//    long long harvest_time;
//    long long quality_loss;
//};
//
//long long solve(int N, long long K, vector<long long>& harvest_times, vector<long long>& quality_losses) {
//    vector<Crop> crops;
//    for (int i = 0; i < N; i++) {
//        crops.push_back({ i, harvest_times[i], quality_losses[i] });
//    }
//
//    // ��Ȯ ���� ���� ������ ����
//    sort(crops.begin(), crops.end(), [](const Crop& a, const Crop& b) {
//        return a.harvest_time < b.harvest_time;
//        });
//
//    long long current_time = K;
//    long long total_loss = 0;
//    int crop_idx = 0;
//    priority_queue<pair<long long, int>> available_crops; // {ǰ�� ������, �ε���}
//
//    while (crop_idx < N || !available_crops.empty()) {
//        // ���� �������� ��Ȯ ������ ��� �۹��� ť�� �߰�
//        while (crop_idx < N && crops[crop_idx].harvest_time <= current_time) {
//            available_crops.push({ crops[crop_idx].quality_loss, crop_idx });
//            crop_idx++;
//        }
//
//        if (available_crops.empty() && crop_idx < N) {
//            // ��Ȯ ������ �۹��� ������ ���� �۹��� ��Ȯ ���� �������� �̵�
//            current_time = crops[crop_idx].harvest_time;
//            continue;
//        }
//
//        if (!available_crops.empty()) {
//            // ���� ��Ȯ ������ �۹� �� ǰ�� �������� ���� ���� ���� ����
//            int selected_idx = available_crops.top().second;
//            available_crops.pop();
//
//            // �սǷ� ���
//            total_loss += (current_time - crops[selected_idx].harvest_time) * crops[selected_idx].quality_loss;
//            current_time++; // ��Ȯ�� 1�ð� �ҿ�
//        }
//    }
//
//    return total_loss;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int T;
//    cin >> T;
//
//    while (T--) {
//        int N;
//        long long K;
//        cin >> N >> K;
//
//        vector<long long> harvest_times(N);
//        vector<long long> quality_losses(N);
//
//        for (int i = 0; i < N; i++) {
//            cin >> harvest_times[i];
//        }
//
//        for (int i = 0; i < N; i++) {
//            cin >> quality_losses[i];
//        }
//
//        cout << solve(N, K, harvest_times, quality_losses) << "\n";
//    }
//
//    return 0;
//}