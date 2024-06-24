#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n = 0, q = 0, k = 0, i = 0, j = 0;
    std::cin >> n >> q;
    std::vector<vector<int>> a(n);
    for (int p = 0; p < q; p++)
    {
        std::cin >> k;
        a[p] = vector<int>(k);
        for(int iter_k = 0; iter_k < k; iter_k++)
        {
            std::cin >> a[p][iter_k];
        }
    }
    for(int iter_f = 0; iter_f < q; iter_f++)
    {
        std::cin >> i >> j;
        std::cout << a[i][j] << endl ;
    }
    return 0;
}
