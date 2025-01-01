//
// Created by cmedina on 1/1/2025.
// https://atcoder.jp/contests/abc382/tasks/abc382_b
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    string s;
    cin >> n >> d >> s;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '@') {
            if (d > 0) {
                d--;
                s[i] = '.';
            }
        }
    }

    cout << s << '\n';
    return 0;
}
