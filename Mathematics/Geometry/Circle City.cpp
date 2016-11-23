#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; 
    long count;
    double r, k, y;
    while(t--) {
        cin >> r >> k; 
        count = 0;
        for(double x = 0; x < ceil(sqrt(r)); x+=1) {
            y = pow((r - pow(x,2)),0.5);
            if(y == floor(y)) {
                count++;
            }
        }
        if((4*count) <= k) {
            cout << "possible" << endl;
        }
        else {
            cout << "impossible" << endl;
        }
    }
    return 0;
}
