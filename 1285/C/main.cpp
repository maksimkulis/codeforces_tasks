#include <iostream>
#include <unordered_set>
#include <cmath>
#include <algorithm>

long long LCM(long long a, long long b)
{
    if (a < b) {
        auto tmp = a;
        a = b;
        b = tmp;
    }
    std::cout << a << " " << b << std::endl;

    for (unsigned long long i = a; i < a * b; ++i) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
    return a * b;

}

int main()
{
    unsigned long long X;
    unsigned long long X_copy = X;
    std::cin >> X;
    // long long X_copy = X;
    std::unordered_set<unsigned long long> s;
    std::cout << static_cast<unsigned long long>(std::sqrt(X));
    for (long long i = 2; i <= static_cast<unsigned long long>(std::sqrt(X)) + 1000; ++i) {
        if (X_copy % i == 0) {
            s.insert(i);
            while (X_copy % i == 0) {
                X_copy /= i;
            }
            if (i < X_copy) {
                break;
            }
        }
    }
    for (auto l: s) {
        std::cout << l << std::endl;
    }
    unsigned long long max = X;
    unsigned long long res_a = 1, res_b = X;
    unsigned long long b;
    for (auto a: s) {
        b = X / a;
        if (s.find(b) != s.end() && LCM(a, b) == X) {
            if (max > std::min(std::max(a, b), max)) {
                max = std::min(std::max(a, b), max);
                res_a = a;
                res_b = b;
            }
        }
    }
    std::cout << res_a << " " << res_b << std::endl;
    return 0;
}
