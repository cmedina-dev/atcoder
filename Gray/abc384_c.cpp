//
// Created by cmedina on 12/27/2024.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    const vector set = {"A", "B", "C", "D", "E"};
    map<char, int> score_map;
    vector<pair<string, int>> scores;
    vector<string> participants;
    score_map['A'] = a;
    score_map['B'] = b;
    score_map['C'] = c;
    score_map['D'] = d;
    score_map['E'] = e;

    for (int mask = 0; mask < 1 << 5; mask++) {
        string participant;
        for (int i = 0; i < 5; i++) {
            if (mask & 1 << i) {
                participant += set[i];
            }
        }
        int score = 0;
        for (auto letter : participant) {
            score += score_map[letter];
        }
        if (score != 0) {
            scores.push_back({participant, score});
        }
    }
    sort(scores.begin(), scores.end(), [](const pair<string, int>& x, const pair<string, int>& y) {
        if (x.second == y.second) {
            return x.first < y.first;
        }
        return x.second > y.second;
    });
    for (auto [fst, snd] : scores) {
        cout << fst << "\n";
    }
}