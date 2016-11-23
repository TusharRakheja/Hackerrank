#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long result = 0;
    long temp;
    while (n--) {
        cin >> temp;
        result += temp;
    }
    cout << result;
    return 0;
}
