#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> vec(105);

int main()
{
    int q, n;
    std::cin >> q;
    while (q--) {

        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }

        std::sort(vec.begin(), vec.begin() + n);
        bool flag = false;
        for (int i = 1; i < n; ++i) {
            if (vec[i] - vec[i - 1] == 1) {
                flag = true;
            }
        }
        std::cout << 1 + flag << std::endl;
    }
    return 0;
}
