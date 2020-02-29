#include <bits/stdc++.h>

int main()
{
    int n, a, b, k;
    std::cin >> n >> a >> b >> k;
    std::map<int, int> map;

    int count = 0;
    int hp;
    int diff;
    while (n--) {
        std::cin >> hp;
        if (hp % (a + b) <= a && hp % (a + b) != 0) {
            ++count;
        } else {
            diff = hp % (a + b) != 0 ? (hp % (a + b) - 1) / a : (b - 1) / a + 1;

            auto itt = map.find(diff);
            if (itt == map.end()) {
                map[diff] = 1;
            } else {
                itt->second++;
            }
        }
    }
    for (auto itt: map) {
        // std::cout << itt.first << "   " << itt.second << std::endl;
        if (k <= 0) {
            break;
        } else {
            count += std::min(k / (itt.first), itt.second);
            k -= itt.first * itt.second;
        }
    }
    std::cout << count;
    return 0;
}
// |||-|||-|||-|
