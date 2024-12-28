//
// Created by cmedina on 12/27/2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r;
    cin >> n >> r;
    if (r >= 1200 && r <= 2799) {
        for (int i = 0; i < n; i++) {
            int d, a;
            cin >> d >> a;
            if (d == 1) {
                if (r >= 1600 && r <= 2799) {
                    r += a;
                }
            }
            else {
                if (r >= 1200 && r <= 2399) {
                    r += a;
                }
            }
        }
    }
    cout << r << "\n";
    return 0;
}
