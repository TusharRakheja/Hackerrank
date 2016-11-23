#include <iostream>

using namespace std;

int main() {
    int t; long k, pieces, add;
    cin >> t;
    while(t--) {
        pieces = add = 1;
        cin >> k;
        if(k == 2) {
            cout << pieces << endl;
            continue;
        }
        for(long i = 3; i <= k; i++) {
            if(i % 2 == 0) {
                add++;
            }
            pieces += add;
        }
        cout << pieces << endl;
    }
    return 0;
}
