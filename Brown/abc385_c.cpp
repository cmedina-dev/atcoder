//
// Created by cmedina on 12/27/2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_len = 0;
    for (int k = 1; k <= n; k++) {
        for (int g = 0; g < k; g++) {
            int cur_len = 0;
            int cur_height = 0;
            int max_len_g = 0;
            for (int i = g; i < n; i += 1 * k) {
                if (arr[i] != cur_height) {
                    cur_height = arr[i];
                    cur_len = 1;
                }
                else {
                    cur_len += 1;
                }
                if (cur_len > max_len_g) {
                    max_len_g = cur_len;
                }
            }
            if (max_len_g > max_len) {
                max_len = max_len_g;
            }
        }
    }
    cout << max_len << "\n";
    return 0;
}
