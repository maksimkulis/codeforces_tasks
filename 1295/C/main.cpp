#include <iostream>


const int INF = int(1e+9) + 99;
const int N = int(1e5) + 100;
int nxt[N][26];
int T;
std::string s, t;

int main()
{
    std::cin >> T;
    while(T--) {
        std::cin >> s >> t;
        for(int i = 0; i < s.size() + 5; ++i) {
            for (int j = 0; j < 26; ++j) {
                nxt[i][j] = INF;
            }
        }
        for (int i = s.size() - 1; i >= 0; --i) {
            for (int j = 0; j < 26; ++j) {
                nxt[i][j] = nxt[i + 1][j];
            }
            nxt[i][s[i] - 'a'] = i;
        }

        int res = 1, pos = 0;
        for (int i = 0; i < t.size(); ++i) {
            if (pos == s.size()) {
                pos = 0;
                ++res;
            }
            if (nxt[pos][t[i] - 'a'] == INF) {
                pos = 0;
                ++res;
            }
            if (nxt[pos][t[i] - 'a'] == INF && pos == 0) {
                res = INF;
                break;
            }
            pos = nxt[pos][t[i] - 'a'] + 1;
        }

        if (res >= INF) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << res << std::endl;
        }
    }
    return 0;
}
