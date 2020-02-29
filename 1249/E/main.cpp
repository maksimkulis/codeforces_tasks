#include <bits/stdc++.h>

std::vector<int> a(int(2e5) + 100);
std::vector<int> b(int(2e5) + 100);

int main()
{
    int n, c;
    std::cin >> n >> c;
    for (int i = 1; i < n - 1; ++i) {
        std::cin >> a[i];
    }
    for (int i = 1; i < n - 1; ++i) {
        std::cin >> b[i];
    }
    a[0] = 0;
    b[0] = 0;
    int count = 0;
    bool last = false;
    for (int i = 0; i < n; ++i) {
        if (last) {
            if (b[i] <= a[i])
        }
        count += std::min(c + b[i], a[i]);
        std::cout << count << " ";
    }
    std::cout << std::endl;
    return 0;
}
