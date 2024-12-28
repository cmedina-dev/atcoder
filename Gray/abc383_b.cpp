//
// Created by cmedina on 12/28/2024.
// https://atcoder.jp/contests/abc383/tasks/abc383_b
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, d;
    cin >> h >> w >> d;

    char arr[h][w];
    vector<pair<int, int>> floors;
    vector<int> scores;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '.') {
                floors.emplace_back(i, j);
            }
        }
    }

    for (auto it = floors.begin(); it != floors.end(); ++it) {
        for (auto it2 = it + 1; it2 != floors.end(); ++it2) {
            pair<int, int> h1 = *it;
            pair<int, int> h2 = *it2;
            int pair_score = 0;

            for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                    if (arr[i][j] == '.') {
                        const int manhattan_a = abs(h1.first - i) + abs(h1.second - j);
                        const int manhattan_b = abs(h2.first - i) + abs(h2.second - j);
                        if (manhattan_a <= d || manhattan_b <= d) {
                            pair_score += 1;
                        }
                    }
                }
            }

            scores.push_back(pair_score);
        }
    }

    int max_score = 0;
    for (int i = 0; i < scores.size(); i++) {
        max_score = max(max_score, scores[i]);
    }
    cout << max_score << '\n';
}
