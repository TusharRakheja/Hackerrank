#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    int n, a, b;
    int temp;
    for(int i = 0; i < t; i++) {
        cin >> n; cin >> a;
        cin >> b;
        if(a < b) {
            a = a + b;
            b = a - b;                  // Swap
            a = a - b;
        }
        if (a != b) {
            for(int j = 0; j <= n-1; j++) {
                cout << a*j + b*((n-1)-j) << " ";
            }
        }
        else cout << (n-1)*a;
        cout << endl;
    }
    return 0;
}
