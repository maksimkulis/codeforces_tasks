#include <iostream>
#include <vector>
#include <string>

int main()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> s;
    std::vector<std::string> t;
    std::string tmp;
    for (int i = 0; i < n; ++i) {
        std::cin >> tmp;
        s.push_back(tmp);
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> tmp;
        t.push_back(tmp);
    }

    int q;
    int year;
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        std::cin >> year;
        std::cout << s[(year - 1) % n] + t[(year - 1) % m] << std::endl;;
    }
    return 0;
}
