#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    long n, c, m;
    long answer = 0;
    long chocolates = 0; long wrappers = 0;
    for(int i = 0; i < t; i++) {
        cin >> n >> c >> m;
        chocolates = n/c;
        wrappers = n/c;
        while(wrappers >= m) {
            chocolates += wrappers/m;
            wrappers = wrappers%m + wrappers/m; 
        }
        cout << chocolates << endl;
    }
    return 0;
}
