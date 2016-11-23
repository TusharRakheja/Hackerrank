#include <iostream>

using namespace std;

void space(int n) {
    for (int i = 0; i < n; i++) cout << " ";
}

void poundfunc(int n) {
    for (int i = 0; i < n; i++) cout << "#"; 
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        space(n-i); poundfunc(i); cout << endl;
    } 
    return 0;
}