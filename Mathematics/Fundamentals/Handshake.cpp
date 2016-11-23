#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    long long n;
    long long answer;
    for(int i = 1; i <= t; i++) {
        cin >> n;
        cout << n*(n-1)/2 << endl;
    }
    return 0;
}
