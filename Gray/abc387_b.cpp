//
// Created by cmedina on 1/24/2025.
// https://atcoder.jp/contests/abc387/tasks/abc387_b
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int x;
    cin >> x;

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (i * j != x) {
                ans += i * j;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}