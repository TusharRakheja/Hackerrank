#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int * c = new int[m];
    for (int i = 0; i < m; i++) 
        cin >> c[i];
    long * ways = new long[n+1];
    ways[0] = 1;
    for (int i = 0; i < m; i++) {
        for (int j = c[i]; j <= n; j++) {
            ways[j] += ways[j - c[i]];
        }
    }
    cout << ways[n];
    delete[] c;
    delete[] ways;
    return 0;
}
