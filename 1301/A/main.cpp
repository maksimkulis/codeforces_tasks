#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    std::string a, b, c;
    for (int j = 0; j < t; ++j) {
        std::cin >> a >> b >> c;
        int sum = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == c[i] || b[i] == c[i]) {
                ++sum;
            } else {
                break;
            }
        }
        if (sum == a.size()) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
