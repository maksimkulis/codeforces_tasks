#include <bits/stdc++.h>

void sort(int& a, int& b, int& c)
{
    std::vector<int> res(3);
    res[0] = a;
    res[1] = b;
    res[2] = c;
    std::sort(res.begin(), res.end());
    a = res[2];
    b = res[1];
    c = res[0];
}


int main()
{
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        sort(a, b, c);
        int count = 0;
        if (a != 0) {
            count++;
            a--;
        }
        if (b != 0) {
            count++;
            b--;
        }
        if (c != 0) {
            count++;
            c--;
        }
        if (a != 0 && b != 0) {
            count++;
            a--;
            b--;
        }
        if (a != 0 && c != 0) {
            count++;
            a--;
            c--;
        }
        if (c != 0 && b != 0) {
            count++;
            c--;
            b--;
        }
        if (a != 0 && b != 0 && c != 0) {
            count++;
        }
        std::cout << count << std::endl;
    }
    return 0;
}
