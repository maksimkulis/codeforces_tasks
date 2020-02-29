#include <bits/stdc++.h>

int main()
{
    int t;
    int a, b, x, y;
    int max = 0;
    std::vector<int> vec(4);
    std::cin >> t;
    while (t--) {
        std::cin >> a >> b >> x >> y;
        vec[0] = x * b;
        vec[1] = (a - 1 - x) * b;
        vec[2] = y * a;
        vec[3] = (b - 1 - y) * a;
        std::cout << *std::max_element(vec.begin(), vec.end()) << std::endl;
    }
    return 0;
}
