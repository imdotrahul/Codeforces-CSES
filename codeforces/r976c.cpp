#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        unsigned long long b, c, d;
        cin >> b >> c >> d;

        unsigned long long a = 0;
        bool possible = true;

        for (int i = 0; i <= 60; i++) {
            unsigned long long mask = 1ULL << i;
            bool b_bit = b & mask;
            bool c_bit = c & mask;
            bool d_bit = d & mask;

            if (d_bit) {
                if (!b_bit) {
                    a |= mask;
                } else if (c_bit) {
                    possible = false;
                    break;
                }
            } else {
                if (c_bit && b_bit) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << a << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
