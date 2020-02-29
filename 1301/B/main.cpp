#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

const int N = 3 * int(1e5);
const int MAX = 2 * int(1e9);
std::vector<int> vec(N);
int main()
{
    int t;
    std::cin >> t;
    int n;
    for (int itter = 0; itter < t; ++itter) {
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> vec[i];
        }
        int max_diff = 0;
        int min_num = MAX, max_num = 0;
        int i = 0, j = 1;
        int last = -1;
        int k = -1;
        while (i < n) {
            if (vec[i] == -1) {
                ++i;
                continue;
            }
            if (last == -1) {
                min_num = vec[i];
                max_num = vec[i];
                last = vec[i];
            } else {
                if (vec[i - 1] == -1) {
                    min_num = std::min(min_num, std::min(last, vec[i]));
                    max_num = std::max(max_num, std::max(last, vec[i]));
                    max_diff = std::max(max_diff, max_num - min_num) / 2 + std::max(max_diff, max_num - min_num) % 2;
                    k = (max_num + min_num) / 2;
                } else {
                    max_diff = std::max(max_diff, std::abs(vec[i] - vec[i - 1]));
                }
                last = vec[i];
            }
            ++i;
        }
        // if (vec[n - 1] == -1) {
        //     min_num = std::min(min_num, last);
        //     max_num = std::max(max_num, last);
        //     max_diff = std::max(max_diff, max_num - min_num);
        //     k = (max_num + min_num) / 2;
        // }
        std::cout << max_diff << " " << k << std::endl;
    }
    return 0;
}
