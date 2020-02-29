#include <iostream>
#include <cmath>
#include <vector>

std::vector<int> v(int(1e5 + 100));

int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        int x;
        std::cin >> n >> x;
        int max = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
            if (v[i] > max) {
                max = v[i];
            }
        }
        int count = x / max;
        int y = (x / max) * max;
        if (y == x) {
            std::cout << count << std::endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            if (v[i] == x - y) {
                flag = true;
            }
        }
        if (flag) {
            std::cout << count + 1 << std::endl;
        }
        else if (count == 0) {
            std::cout << 2 << std::endl;
        }
        else {
            std::cout << count + 1 << std::endl;
        }
    }
    return 0;
}
