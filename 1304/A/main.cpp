#include <iostream>
#include <string>
#include <vector>


int main()
{
    int t;
    std::cin >> t;
    int x, y, a, b;
    for (int itter = 0; itter < t; ++itter) {
        std::cin >> x >> y >> a >> b;
        if ((y - x) % (a + b) == 0) {
            std::cout << (y - x) / (a + b) << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}
