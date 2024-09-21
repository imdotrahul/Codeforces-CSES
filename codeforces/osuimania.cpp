#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    if (x >= y) {
        cout << ceil((double)n / x) << "\n";
        return;
    }

    int time = 0, fruits_in_blender = 0;

    while (n > 0 || fruits_in_blender > 0) {
        int fruits_to_insert = min(n, y);
        fruits_in_blender += fruits_to_insert;
        n -= fruits_to_insert;
        int fruits_to_blend = min(fruits_in_blender, x);
        fruits_in_blender -= fruits_to_blend;

        time++;
    }
    cout << time << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
