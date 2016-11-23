#include <iostream>

using namespace std;

int main() {
    int t, n, k, temp, count; 
    cin >> t;
    while(t--) {
        cin >> n >> k;
        count = 0;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            if(temp <= 0) {
                count++;
            }
        }
        if(count < k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
