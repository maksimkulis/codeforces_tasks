#include <bits/stdc++.h>


std::vector<int> base3(long long num)
{
    std::vector<int> res(50);
    long long del = num;
    long long ost;
    int len_res = 0;
    for (int i = 0; i < 50; ++i) {
        res[i] = 0;
    }

    while (del > 0) {
        ost = del % 3;
        del = del / 3;
        res[len_res++] = ost;
    }
    res.resize(len_res + 1);
    std::reverse(res.begin(), res.begin() + len_res + 1);
    return res;
}

long long back_base10(std::vector<int> vec)
{
    long long res = 0;
    long long base = 1;
    for (int i = vec.size() - 1; i >= 0; --i) {
        res += vec[i] * base;
        base *= 3;
    }
    return res;
}

int main()
{
    long long num;
    std::cin >> num;
    std::vector<int> res = base3(num);
    for (auto c: res) {
        std::cout << c << " ";
    }
    std::cout << std::endl << back_base10(res);
    return 0;
}
