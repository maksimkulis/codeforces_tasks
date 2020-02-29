#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    size_t n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    std::sort(vec.begin(), vec.end());
    for (size_t i = 0; i < n; ++i) {
        std::cout << vec[n - i - 1] << std::endl;
    }
    return 0;
}
