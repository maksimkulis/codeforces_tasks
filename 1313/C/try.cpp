#include <bits/stdc++.h>

std::vector<int> vec(500100);
std::vector<int> tmp(500100);
std::vector<int> res(500100);

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    res.resize(n);
    vec.resize(n);
    tmp.resize(n);

    long long count = 0;
    long long max = 0;
    for (int i = 0; i < n; ++i) {
        long long cur = vec[i];
        count = vec[i];
        tmp[i] = vec[i];
        for (int j = i - 1; j >= 0; --j) {
            if (vec[j] < cur) {
                cur = vec[j];
            }
            tmp[j] = cur;
            count += cur;
        }
        cur = vec[i];
        for (int j = i + 1; j < n; ++j) {
            if (vec[j] < cur) {
                cur = vec[j];
            }
            tmp[j] = cur;
            count += cur;
        }
        if (count > max) {
            std::copy(tmp.begin(), tmp.end(), res.begin());
            max = count;
        }
    }
    for (auto c: res) {
        std::cout << c << " ";
    }
    return 0;
}
