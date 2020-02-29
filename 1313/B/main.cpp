#include <bits/stdc++.h>

int main()
{
    int t;
    int n, x, y;
    std::cin >> t;
    while(t--) {
        std::cin >> n >> x >> y;
        // std::cout << std::min(y - 2, n - x - 1) + std::min(x - 2, n - y - 1) + 1 << " ";
        // std::cout << std::min((y - 1) - std::min(y - 1, n - x), (x - 1) - std::min(x - 1, n - y)) << std::endl;
        std::cout << std::max(std::min(x, y) - 1, 1) << " ";
        if (x + y < n) {
            std::cout << std::max(x, y) << std::endl;
        } else {
            std::cout << n << std::endl;
        }

    }
    return 0;
}
