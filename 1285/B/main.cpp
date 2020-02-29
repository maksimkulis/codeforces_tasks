#include <iostream>
#include <vector>
#include <algorithm>

const int N = 3 * int(1e5);
std::vector<int> vec(N);
const long long zero = 0;

int main()
{
    int t, n;
    std::cin >> t;
    for(int itter = 0; itter < t; ++itter) {
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }


        bool flag = false;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += vec[i];
            if (sum <= 0) {
                std::cout << "NO" << std::endl;
                flag = true;
                break;
            }
        }
        if (flag) {
            continue;
        }
        sum = 0;
        for (int i = n - 1; i >= 0; --i) {
            sum += vec[i];
            if (sum <= 0) {
                std::cout << "NO" << std::endl;
                flag = true;
                break;
            }
        }

        if (flag) {
            continue;
        }
        std::cout << "YES" << std::endl;
    }
    return 0;

}
