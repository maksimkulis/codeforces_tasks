#include <iostream>
#include <vector>

// #define MAX_N 110

int main()
{
    size_t t, n;
    int tmp, sum, count;
    sum = 0;
    count = 0;
    std::cin >> t;
    for (size_t i = 0; i < t; ++i) {
        std::cin >> n;
        sum = 0;
        count = 0;
        for (int j = 0; j < n; ++j) {
            std::cin >> tmp;
            if (tmp == 0) {
                count += 1;
            }
            sum += tmp;
        }
        if (count == 0) {
            if (sum == 0) {
                std::cout << 1 << std::endl;
            }
            else {
                std::cout << 0 << std::endl;
            }
        }
        else {
            if (sum + count == 0) {
                std::cout << count + 1 << std::endl;
            }
            else {
                std::cout << count << std::endl;
            }
        }
    }
    return 0;
}
