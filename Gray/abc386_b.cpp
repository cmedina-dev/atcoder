//
// Created by cmedina on 12/31/2024.
// https://atcoder.jp/contests/abc386/tasks/abc386_b
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int ans = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] != '0') {
            ans++;
        }
        else {
            ans++;
            if (i + 1 < s.length() && s[i + 1] == '0') {
                i++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
