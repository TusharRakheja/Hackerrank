#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>

using namespace std;

bool kaprekar(long long n) {
    //cout << "N: " << n;
    long long nsq = n * n;
    stringstream s;
    s << nsq;
    string num = s.str();
    //cout << "Num: " << num;
    long long l = atol(num.substr(0, num.size() - (num.size() + 1)/2).c_str());
    //cout << "\tL: " << l;
    long long r = atol(num.substr(num.size()/2, (num.size() + 1)/2).c_str());
    //cout << "\tR: " << r;
    //cout << "\t:L + R: " << l + r << endl;
    return (l + r == n);    
}

int main() {
    int p, q;
    cin >> p >> q;
    bool any = false;
    for (long long i = p; i <= q; i++) {
        if (kaprekar(i)) {
            any = true;
            cout << i << " ";
        }        
    }
    if (!any) cout << "INVALID RANGE";
    return 0;
}