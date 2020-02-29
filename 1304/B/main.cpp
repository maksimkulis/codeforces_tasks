#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> used(105);
std::vector<std::string> v(105);
std::vector<std::string> res(105);

int main()
{
    int res_num = 0;
    int x;
    bool x_exist = false;

    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
        used[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        bool flag = 0;
        for (int j = i + 1; j < n; ++j) {
            if (v[i] == v[j]) {
                used[j] = 1;
                flag = true;
                break;
            }

            std::string tmp = v[j];
            std::reverse(tmp.begin(), tmp.end());
            if (v[i] == tmp) {
                used[j] = 1;
                flag = true;
                break;
            }
        }
        if (flag) {
            used[i] = 1;
            res[res_num++] = v[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (used[i]) continue;

        std::string tmp = v[i];
        std::reverse(tmp.begin(), tmp.end());
        if (v[i] == tmp) {
            x = i;
            x_exist = true;
            break;
        }
    }
    std::cout << (2*res_num + x_exist) * m << std::endl;
    for (int i = 0; i < res_num; ++i) {
        std::cout << res[i];
    }
    if (x_exist) {
        std::cout << v[x];
    }
    for (int i = res_num - 1; i >= 0; --i) {
        std::string tmp = res[i];
        std::reverse(tmp.begin(), tmp.end());
        std::cout << tmp;
    }
    return 0;
}
