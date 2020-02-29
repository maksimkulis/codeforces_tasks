#include <bits/stdc++.h>

std::vector<int> b(105);
std::vector<int> a(205);
std::unordered_set<int> set;
std::map<int, int> map;

int main()
{
    int t, n;
    bool flag;
    std::cin >> t;
    while(t--) {
        flag = true;
        set.clear();
        map.clear();
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            int value;
            std::cin >> value;
            b[i] = value;
            set.insert(value);

        }
        std::vector<int> tmp(b);
        std::sort(tmp.begin(), tmp.begin() + n);
        int j = 2 * n;
        for (int i = n - 1; i >= 0; --i) {
            while (set.find(j) != set.end()) --j;

            if (tmp[i] < j) {
                map[tmp[i]] = j;
                set.insert(j);
                --j;
            } else {
                flag = false;
                break;
            }
        }
        if(!flag) {
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
