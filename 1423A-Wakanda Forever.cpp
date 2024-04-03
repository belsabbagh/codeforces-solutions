#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits>
#define NONE -1

using namespace std;

vector<size_t> assign(vector<vector<size_t>> &costs) {
    
}

int main()
{
    size_t n;
    cin >> n;
    vector<vector<size_t>> costs(n, vector<size_t>(n, NONE));

    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            cin >> costs[i][j];
        }
    }
    vector<size_t> ideal_partners = assign(costs);
    
    // for (size_t i = 0; i < n; i++)
    // {
    //     for (size_t j = 0; j < n; ++j)
    //     {
    //         if (i == j)
    //             continue;
    //         size_t partner = hungarianAlgorithm
    //         if (ideal_partners[i] != i)
    //         {
    //             cout << -1;
    //             return 0;
    //         }
    //     }
    // }
    for (size_t i = 0; i < n; i++)
    {
        cout << ideal_partners[i] + 1 << endl;
    }
}
