#include <iostream>

int main()
{
    size_t t;
    std::cin >> t;
    int a, b;
    for (size_t i = 0; i < t; ++i) {
        std::cin >> a >> b;
        if ((2 * b - a) >= 0
            && (2 * a - b) >= 0
            && ((2 * b - a) % 3 == 0)
            && ((2 * a - b)) % 3 == 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
