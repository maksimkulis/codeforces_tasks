#include <iostream>
#include <utility>
#include <cmath>
#include <algorithm>

#define ll long long

int main()
{
    int q;
    ll n, m, t_cur, x, y;
    std::cin >> q;
    while (q--) {
        std::cin >> n >> m;
        x = y = m;
        t_cur = 0;
        bool f = true;
        while (n--) {
            ll t, l, h;
            std::cin >> t >> l >> h;
            x -= t - t_cur;
            y += t - t_cur;
            t_cur = t;
            x = std::max(x, l);
            y = std::min(y, h);
            if (x > y) {
                f = false;
            }
        }
        if (f) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
