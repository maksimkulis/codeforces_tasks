#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    char c;
    int L = 0, R = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> c;
        if (c == 'L') {
            ++L;
        } else {
            ++R;
        }
    }
    std::cout << L + R + 1;
    return 0;
}
