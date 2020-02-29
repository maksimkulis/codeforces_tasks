#include <iostream>
#include <cmath>

int main()
{
    size_t n;
    std::cin >> n;
    long long rad_max, sec_min;
    long long tmp, res;
    for (size_t i = 0; i < n; ++i) {
        std::cin >> rad_max >> sec_min;
        tmp = sec_min / rad_max;
        res = (rad_max - sec_min % rad_max) * std::pow(tmp, 2) + sec_min % rad_max * std::pow(tmp + 1, 2);
        std::cout << res << std::endl;
    }
    return 0;
}
