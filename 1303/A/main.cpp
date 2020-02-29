#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    std::string s;
    for (int i = 0; i < t; ++i) {
        std::cin >> s;

        int j = 0;
        while (s[j] == '0' && j < s.size()) {
            ++j;
        }
        if (j == s.size()) {
            std::cout << 0 << std::endl;
            continue;
        }

        int zeros = 0, tmp = 0;
        for (; j < s.size(); ++j) {
            if (s[j] == '0') {
                tmp += 1;
            } else {
                zeros += tmp;
                tmp = 0;
            }
        }
        std::cout << zeros << std::endl;
    }
    return 0;
}
