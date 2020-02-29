#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_N 1000100

int main()
{
    size_t t, n;
    std::cin >> t;
    std::vector<int> pup(MAX_N);

    for (size_t i = 0; i < t; ++i) {
        std::cin >> n;
        for (size_t j = 0; j < 2 * n; ++j) {
            std::cin >> pup[j];
        }
        std::sort(pup.begin(), pup.begin() + 2 * n);
        std::cout << std::abs(pup[n] - pup[n - 1]) << std::endl;
    }
    return 0;
}
