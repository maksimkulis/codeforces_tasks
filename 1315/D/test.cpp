#include <bits/stdc++.h>


struct defaultVec
{
    std::vector<int> v;

};

int main()
{
    std::vector<int> v = {5, 4, 3};
    std::map<int, std::vector<int>> map;
    map[1] = v;
    std::sort(map[1].begin(), map[1].end());
    for (auto key: map) {
        std::sort(key.second.begin(), key.second.end());
        for (int i = 0; i < 3; ++i) {
            std::cout << map[key.first][i] << " " << map[key.first][i] << std::endl;
        }

    }
    return 0;
}
