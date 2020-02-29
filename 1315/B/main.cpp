#include <bits/stdc++.h>

int main()
{
    int t;
    long long a, b, p, n;
    std::string str;

    std::cin >> t;
    while (t--) {
        std::cin >> a >> b >> p;
        std::cin >> str;
        n = str.size();
        std::reverse(str.begin(), str.end());
        int i = 0;
        if (str[0] != str[1]) i++;
        while(p > 0 && i < n) {
            if (str[i] == 'A') {
                if (p - a < 0) break;
                while (i < n && str[i] == 'A') ++i;
                p -= a;
            } else {
                if (p - b < 0) break;
                while (i < n && str[i] == 'B') ++i;
                p -= b;
            }
        }
        std::cout << std::min(n, std::max(n - i + 1, (long long) 1)) << std::endl;
    }
}
