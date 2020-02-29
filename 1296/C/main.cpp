#include <string>
#include <map>
#include <iostream>


void c_to_p(std::pair<int, int>& pair, char c)
{
    if (c == 'L') pair.first -= 1;
    if (c == 'R') pair.first += 1;
    if (c == 'D') pair.second -= 1;
    if (c == 'U') pair.second += 1;
}

int main()
{
    int t;
    std::cin >> t;
    std::string s;
    int n;
    while (t--){
        std::map<std::pair<int, int>, int> map;

        std::cin >> n;
        std::cin >> s;
        std::pair<int, int> coord = std::make_pair(0, 0);

        size_t min = 10000000;
        size_t l, r;


        std::map<std::pair<int, int>, int>::iterator i;
        map[coord] = 0;

        for (size_t j = 0; j < n; ++j) {
            c_to_p(coord, s[j]);

            i = map.find(coord);
            if (i == map.end()) {
                map[coord] = j + 1;
            } else {
                if (j - (i->second) + 1 < min) {
                    min = j - (i->second) + 1;
                    l = i->second;
                    r = j;
                }
                i->second = j + 1;
            }
        }
        if (min == 10000000) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << l + 1 << ' ' << r + 1<< std::endl;
        }
    }
    return 0;
}
