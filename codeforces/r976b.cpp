#include <iostream>
#include <cmath>

long long findCount(long long mid) {
    long long m = static_cast<long long>(std::sqrt(mid));

    while (m * m > mid) {
        m--;
    }
    while ((m + 1) * (m + 1) <= mid) {
        m++;
    }

    return mid - m;
}

long long solve(int n) {
    long long start = 1, end = 2 * 1e18;
    long long ans = 0;

    while (start <= end) {
        long long mid = (start + end) / 2;
        long long count = findCount(mid);

        if (count >= n) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::cout << solve(n) << std::endl;
    }

    return 0;
}
