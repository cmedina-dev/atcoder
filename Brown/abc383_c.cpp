//
// Created by cmedina on 1/1/2025.
// https://atcoder.jp/contests/abc383/tasks/abc383_c
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, d;
    cin >> h >> w >> d;
    vector arr(h, vector<char>(w));
    vector<pair<int, int>> humidifiers;
    vector distances(h, vector<int>(w, -1));
    queue<pair<int, int>> q;
    vector<pair<int, int>> deltas = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'H') {
                humidifiers.emplace_back(i, j);
                distances[i][j] = 0;
                q.emplace(i, j);
            }
        }
    }

    while (!q.empty()) {
        auto [row, col] = q.front();
        q.pop();

        for (auto [dx, dy] : deltas) {
            int new_row = row + dx;
            int new_col = col + dy;

            if (new_row >= 0 && new_row < h && new_col >= 0 && new_col < w) {
                if (arr[new_row][new_col] == '.') {
                    int new_dist = distances[row][col] + 1;
                    if (distances[new_row][new_col] == -1 || new_dist < distances[new_row][new_col]) {
                        distances[new_row][new_col] = new_dist;
                        q.emplace(new_row, new_col);
                    }
                }
            }
        }
    }

    int humidified = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (distances[i][j] >= 0 && distances[i][j] <= d) {
                humidified++;
            }
        }
    }

    cout << humidified << '\n';
    return 0;
}
