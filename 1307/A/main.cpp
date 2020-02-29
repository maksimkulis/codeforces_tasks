#include <iostream>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        int count = 0;
        int n, d;
        std::cin >> n >> d;
        std::cin >> count;
        int cur;
        for (int i = 1; i < n; ++i) {
            std::cin >> cur;
            if (d / i) {
                count += std::min(d / i, cur);
                d -= std::min(d/i * i, cur * i);
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
