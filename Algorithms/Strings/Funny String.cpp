#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char s[10000];
    int t;
    bool funny;
    cin >> t;
    while(t--) {
        funny = true;
        cin >> s;
        int len = strlen(s) - 1;
        for(int i = 1; i <= len; i++) {
            if(abs(s[i] - s[i-1]) != abs(s[len - i + 1] - s[len - i])) {
                funny = false;
                break;
            }
        }
        (funny) ? cout << "Funny\n" : cout << "Not Funny\n";
    }
    return 0;
}
