#include <bits/stdc++.h>

int main()
{
    std::vector<int> v = {1, 2, 3};
    std::v<int> b(v);
    v[0] = 0;
    std::cout << b[0];
    return 0;
}
