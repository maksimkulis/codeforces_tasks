#include <bits/stdc++.h>

int main()
{
    int t;
    int n;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        int count = 0;
        bool flag = false;
        int num;
        for (int _ = 0; _ < n; ++_) {
            std::cin >> num;
            count += num % 2;
        }
        if (count % 2 || (count != n and count != 0)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
