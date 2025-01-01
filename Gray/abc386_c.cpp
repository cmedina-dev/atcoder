//
// Created by cmedina on 12/31/2024.
// https://atcoder.jp/contests/abc386/tasks/abc386_c
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string s, t;
    cin >> k >> s >> t;

    size_t s_len = s.length();
    size_t t_len = t.length();
    if (abs(static_cast<int>(s_len - t_len)) > k) {
        cout << "No" << '\n';
    }
    else if (abs(static_cast<int>(s_len - t_len)) < k) {
        int diffs = 0;
        for (size_t i = 0; i < min(s_len, t_len); i++) {
            if (s[i] != t[i]) {
                diffs++;
            }
        }
        if (diffs > k) {
            cout << "No" << '\n';
        }
        else {
            cout << "Yes" << '\n';
        }
    }
    else {
        int diffs = 0;
        size_t i = 0, j = 0;
        while (i < s_len && j < t_len) {
            if (s[i] != t[j]) {
                diffs++;
                if (s_len < t_len) {
                    j++;
                }
                else {
                    i++;
                }
            }
            i++;
            j++;
        }
        if (diffs > k) {
            cout << "No" << '\n';
        }
        else {
            cout << "Yes" << '\n';
        }
    }
    return 0;
}
