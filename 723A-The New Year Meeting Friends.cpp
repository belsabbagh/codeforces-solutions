#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    array<int, 3> points = array<int, 3>();

    for (int i = 0; i < 3; i++)
    {
        cin >> points[i];
    }
    sort(points.begin(), points.end());
    int answer = points[1] - points[0] + points[2] - points[1];

    cout << answer;
}
