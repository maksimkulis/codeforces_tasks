#include <string>
#include <algorithm>
#include <iostream>
int main()
{
    std::string a("DAROVA");
    std::reverse(a.begin(), a.end());
    std::cout << a;
    return 0;
}
