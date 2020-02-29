#include <iostream>
#include <vector>

class segment
{
    segment(int left, int right) : left(left), right(right), len()
    {
    }
    int left, right;
    int len;
}

int main()
{
    int n;
    int tmp;
    std::vector<int> v;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> tmp;
        v.push_back(tmp);
    }


}
