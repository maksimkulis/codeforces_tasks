#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    std::sort(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.end());
    int sum = 0;
    for (auto a: vec) {
        sum += a;
    }
    sum = sum / 2 + 1;
    int i = 0;
    int tmp = 0;
    while (true) {
        tmp += vec[i++];
        if (tmp >= sum) {
            break;
        }
    }
    std::cout << i;
}
