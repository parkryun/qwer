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
//    // 수확 가능 시점 순으로 정렬
//    sort(crops.begin(), crops.end(), [](const Crop& a, const Crop& b) {
//        return a.harvest_time < b.harvest_time;
//        });
//
//    long long current_time = K;
//    long long total_loss = 0;
//    int crop_idx = 0;
//    priority_queue<pair<long long, int>> available_crops; // {품질 저하율, 인덱스}
//
//    while (crop_idx < N || !available_crops.empty()) {
//        // 현재 시점에서 수확 가능한 모든 작물을 큐에 추가
//        while (crop_idx < N && crops[crop_idx].harvest_time <= current_time) {
//            available_crops.push({ crops[crop_idx].quality_loss, crop_idx });
//            crop_idx++;
//        }
//
//        if (available_crops.empty() && crop_idx < N) {
//            // 수확 가능한 작물이 없으면 다음 작물의 수확 가능 시점으로 이동
//            current_time = crops[crop_idx].harvest_time;
//            continue;
//        }
//
//        if (!available_crops.empty()) {
//            // 현재 수확 가능한 작물 중 품질 저하율이 가장 높은 것을 선택
//            int selected_idx = available_crops.top().second;
//            available_crops.pop();
//
//            // 손실량 계산
//            total_loss += (current_time - crops[selected_idx].harvest_time) * crops[selected_idx].quality_loss;
//            current_time++; // 수확에 1시간 소요
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