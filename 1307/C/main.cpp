#include <iostream>
#include <string>
#include <vector>

std::vector<char> letters(int(1e5) + 100);
std::vector<int> nums(int(1e5) + 100);
std::vector<int> chars(26);

int main()
{
    std::string s;
    std::cin >> s;
    for (int i = 0; i < 26; ++i) {
        chars[i] = 0;
    }
    char last = '1';
    int itt = -1;

    for (auto letter: s) {
        chars[letter - 'a']++;
        if (letter != last) {
            letters[++itt] = letter;
            nums[itt] = 1;
        } else {
            nums[itt]++;
        }
    }
    itt++;

    int res = 0;
    for (int i = 0; i < itt; ++i) {
        if (nums[i] > res) {
            res = std::max(res, nums[i]);
        }
    }

    return 0;
}
