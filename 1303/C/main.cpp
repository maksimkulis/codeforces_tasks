#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

std::vector<char> v(100);


int main()
{
    int n;
    std::cin >> n;
    std::string s;

    while(n--) {
        std::cin >> s;
        std::unordered_set<char> set;

        if (s.size() < 2) {
            std::cout << "YES\nabcdefghijklmnopqrstuvwxyz\n";
            continue;
        }
        for (int i = 0; i < 100; ++i) {
            v[i] = ' ';
        }

        int ind = 50;
        int last = -1;
        v[ind - 1] = s[0];
        v[ind] = s[1];
        set.insert(s[0]);
        set.insert(s[1]);
        bool f = 1;
        for (int i = 2; i < s.size(); ++i) {
            if (v[ind + last] == s[i]) {
                ind += last;
                last *= -1;
            } else if (v[ind - last] == s[i]) {
                ind -= last;
            } else if (v[ind - last] == ' ' && set.find(s[i]) == set.end()) {
                v[ind - last] = s[i];
                ind -= last;
                set.insert(s[i]);
            } else {
                std::cout << "NO\n";
                f = 0;
                break;
            }
        }
        if (!f) {
            continue;
        }

        std::cout << "YES\n";
        int i = 0;
        while (v[i] == ' ') ++i;
        while (i < v.size() && v[i] != ' ') {
            std::cout << v[i];
            ++i;
        }
        i = 0;
        while (i < 26) {
            if (set.find(char(int('a') + i)) == set.end()) {
                std::cout << char(int('a') + i);
            }
            ++i;
        }
        std::cout << std::endl;
    }
    return 0;
}
