#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    for (size_t i = 0; i < k; i++)
    {
        int z = (int)(n % 10 == 0);
        n = (n - (1 - z)) / (9 * z + 1);
    }
    cout << n;
}
