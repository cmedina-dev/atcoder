//
// Created by cmedina on 12/27/2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, x, y;
    cin >> h >> w >> x >> y;
    char arr[h][w];
    pair<int, int> santa = make_pair(x-1, y-1);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
        }
    }
    set<pair<int, int>> houses;
    string d;
    cin >> d;
    for (const auto c : d) {
        if (c == 'L' && arr[santa.first][santa.second-1] != '#') {
            santa.second -= 1;
        }
        else if (c == 'R' && arr[santa.first][santa.second+1] != '#') {
            santa.second += 1;
        }
        else if (c == 'U' && arr[santa.first-1][santa.second] != '#') {
            santa.first -= 1;
        }
        else if (c == 'D' && arr[santa.first+1][santa.second] != '#') {
            santa.first += 1;
        }
        if (arr[santa.first][santa.second] == '@' && !houses.contains(santa)) {
            houses.insert(santa);
        }
    }
    cout << santa.first+1 << ' ' << santa.second+1 << ' ' << houses.size() << "\n";
    return 0;
}
