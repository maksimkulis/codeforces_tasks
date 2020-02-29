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
    int q;
    long long n;
    std::vector<int> n_base3;

    std::cin >> q;
    while (q--) {
        std::cin >> n;
        n_base3 = base3(n);
        for (int i = n_base3.size() - 1; i >= 0; --i) {
            if (n_base3[i] == 2) {
                for (int j = i; j < n_base3.size(); ++j) {
                    n_base3[j] = 0;
                }
                for (int j = i - 1; j >= 0; --j) {
                    if (n_base3[j] < 2) {
                        n_base3[j] += 1;
                        break;
                    } else {
                        n_base3[j] = 0;
                    }
                }
            }
        }
        std::cout << back_base10(n_base3) << std::endl;
    }
    return 0;
}
