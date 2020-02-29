#include <bits/stdc++.h>


int main()
{
    int t, n;
    std::array<int, 105> b;
    std::unordered_set<int> set;
    std::unordered_map<int, int> map;

    std::cin >> t;
    while(t--) {

        std::cin >> n;
        set.clear();
        map.clear();

        bool flag = true;
        for (int i = 0; i < n; ++i) {
            std::cin >> b[i];
            set.insert(b[i]);
        }

        std::array<int, 105> sorted_b(b);
        for (int i = 0; i < n; ++i) {
            int second = b[i] + 1;
            while(set.find(second) != set.end()) ++second;

            if (second > 2 * n) {
                flag = false;
                break;
            } else {
                map[b[i]] = second;
                set.insert(second);
            }

        }
        if (!flag) {
            std::cout << -1 << std::endl;
            continue;
        } else {
            for (int i = 0; i < n; ++i) {
                std::cout << b[i] << " " << map[b[i]] << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
