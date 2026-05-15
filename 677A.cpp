#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, h;
    cin >> n >> h;
    int width = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > h) {
            width++;
        }
        width++;
    }
    cout << width << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) { solve(); }
    return 0;
}
