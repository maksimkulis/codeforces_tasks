#include <iostream>

bool beautifool(int n)
{
    if (n == 0) {
        return false;
    }

    while (true) {
        if (n == 0) {
            return true;
        }

        int tmp = n % 10;
        if (!(tmp == 4 || tmp == 7)) {
            return false;
        }
        n /= 10;
    }
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 4; i <= n; ++i) {
        if (n % i == 0) {
            if (beautifool(i)) {
                std::cout << "YES";
                return 0;
            }
        }
    }
    std::cout << "NO";
    return 0;
}
