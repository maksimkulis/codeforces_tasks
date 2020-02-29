#include <bits/stdc++.h>

std::vector<int> vec(1005);

std::vector<int> result(1005);

int find_max(int left, int right)
{
    if (left >= right) {
        return vec[left];
    }
    int min = *std::min_element(vec.begin() + left, vec.begin() + right + 1);
    int max = -1;
    int ind;
    bool go_left;

    for (int i = left; i <= right; ++i) {
        if (vec[i] == min) {
            int left_max = find_max(left, i-1);
            int right_max = find_max(i+1, right);

            int value_if_left = left_max + min * (right - i + 1);
            int value_if_right = right_max + min * (i + 1 - left);
            if (value_if_left > value_if_right) {
                if (value_if_left > max) {
                    max = value_if_left;
                    ind = i;
                    go_left = true;
                }
            } else {
                max = std::max(value_if_right, max);
                if (value_if_right > max) {
                    max = value_if_right;
                    ind = i;
                    go_right = false;
                }
            }
        }
    }
    

    return max;
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    std::cout << find_max(0, n-1);
    return 0;
}
