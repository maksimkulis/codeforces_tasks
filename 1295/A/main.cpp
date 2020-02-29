#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    for(size_t i = 0; i < t; ++i) {
        int n;
        std::cin >> n;
        if (n % 2) {
            std::cout << 7;
            n -= 3;
        }
        while (n > 0) {
            std::cout << 1;
            n -= 2;
        }
        std::cout << std::endl;
    }
    return 0;
}
