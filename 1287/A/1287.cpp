#include <iostream>
#include <string>

int main()
{
    int t;
    int n;
    int count;
    std::string str;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        count = 0;
        std::cin >> n;
        str = "";
        std::cin >> str;
        str += "A";
        int tmp = 0;
        int j = 0;
        while (str[j] == 'P' && j < n) {
            ++j;
        }
        for (; j < n + 1; ++j) {
            if (str[j] == 'P') {
                tmp++;
            } else {
                count = std::max(count, tmp);
                tmp = 0;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
