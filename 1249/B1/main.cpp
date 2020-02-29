#include <bits/stdc++.h>

std::vector<int> vec(int(2e5) + 100);
std::unordered_set<int> set;
std::vector<int> res(int(2e5) + 100);

int main()
{
    int q, n;
    std::cin >> q;
    while (q--) {
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> vec[i];
            vec[i] -= 1;
            res[i] = 0;
        }
        for (int i = 0; i < n; ++i) {
            if (res[i] != 0) {
                continue;
            }

            set.clear();
            set.insert(i);

            int cur = vec[i];
            int count = 1;

            while (true) {
                if (set.find(cur) != set.end()) {
                    break;
                } else {
                    set.insert(cur);
                    cur = vec[cur];
                    ++count;
                }
            }
            for (auto itt: set) {
                res[itt] = count;
            }
        }
        for (int i = 0; i < n; ++i) {
            std::cout << res[i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
