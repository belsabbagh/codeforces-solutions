#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n;
    cin >> n;
    array<string,2> res_options = {"I hate", "I love"};
    string res = res_options[0];

    for (size_t i = 1; i < n; i++)
    {
        res += " that " + res_options[i % 2];
    }
    res += " it";

    cout << res;
}
