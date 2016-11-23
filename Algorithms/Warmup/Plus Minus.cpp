#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int temp;
    float p = 0, neg = 0, z = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > 0) p++;
        else if (temp < 0) neg++;
        else z++;
    }
    p = p/n;
    neg = neg/n;
    z = z/n;
    cout << fixed << setprecision(3) << p << endl;
    cout << fixed << setprecision(3) << neg << endl;
    cout << fixed << setprecision(3) << z;
    return 0;
}