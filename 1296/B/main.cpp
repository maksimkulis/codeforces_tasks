#include <bits/stdc++.h>

int main()
{
    int t;
    std::cin >> t;
    long long s;
    while (t--) {
        std::cin >> s;
        long long tmp, res = 0;
        tmp = s;
        while (tmp / 10) {
            res += tmp / 10 * 10;
            tmp = tmp / 10 + tmp % 10;
        }
        std::cout << res + tmp % 10 << std::endl;
    }
    return 0;
}
