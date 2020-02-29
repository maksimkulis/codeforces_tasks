#include <bits/stdc++.h>

#define ll long long
ll letters[26][26];
ll m_let[26];

int main()
{
    std::string str;
    std::cin >> str;
    for (int i = 0; i < 26; ++i){
        for (int j = 0; j < 26; ++j) {
            letters[i][j] = 0;
        }
        m_let[i] = 0;
    }

    for (auto c: str) {
        for (int i = 0; i < 26; ++i) {
            letters[i][c - 'a'] += m_let[i];
        }
        m_let[c - 'a'] += 1;
    }

    ll res = 0;
    for (int i = 0; i < 26; ++i) {
        res = std::max(res, m_let[i]);
        for (int j = 0; j < 26; ++j) {
            res = std::max(res, letters[i][j]);
        }
    }
    std::cout << res;
    return 0;
}
